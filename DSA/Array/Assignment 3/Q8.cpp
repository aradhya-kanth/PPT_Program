/*
Given an array of meeting time intervals where intervals[i] = [starti, endi],
determine if a person could attend all meetings.
*/
#include <bits/stdc++.h>

using namespace std;
bool cmp(vector<int> a, vector<int>b){
    return a[0] < b[0];
}

bool canAttend(vector<vector<int>> intervals){
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), cmp);
    for(int i=0;i<n-1;++i){
        if (intervals[i][1] > intervals[i+1][0])
            return false;
    }
    return true;
}
int main(){
    int n; // size of vector
    cin >> n;
    vector<vector<int>> intervals(n);
    for(int i=0;i<n;++i){
        vector<int>v(2);
        for(int j=0;j<2;++j){
            cin >> v[j];
        }
        intervals[i] = v;
    }
    if (canAttend(intervals))
        cout << "true";
    else
        cout << "false";
    return 0;
}
