/*
Question 1**
Given two strings s1 and s2, return *the lowest **ASCII** sum of deleted characters to make two strings equal*.
*/
#include <bits/stdc++.h>

using namespace std;
int solveTab(string &s1,string &s2){
    int n=s1.length();
    int m=s2.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    for(int i=n-1;i>=0;i--){
        for(int j=m-1;j>=0;j--){
            int ans=0;
            if(s1[i]==s2[j]){
                ans=s1[i]+dp[i+1][j+1];
            }else{
                ans=max(dp[i+1][j],dp[i][j+1]);
            }
            dp[i][j]=ans;
        }
    }
    return dp[0][0];
}
int minimumDeleteSum(string s1, string s2) {
    int n=s1.length();
    int m=s2.length();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=s1[i];
    }
    for(int i=0;i<m;i++){
        sum+=s2[i];
    }
    return sum-(2*(solveTab(s1,s2)));
}
int main(){
    string s1;
    cin >> s1;
    string s2;
    cin >> s2;
    cout << minimumDeleteSum(s1, s2);
}
