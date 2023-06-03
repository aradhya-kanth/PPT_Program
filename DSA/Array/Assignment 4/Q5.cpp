/*
Question 5
You have n coins and you want to build a staircase with these coins.
The staircase consists of k rows where the ith row has exactly i coins.
The last row of the staircase **may be** incomplete.
Given the integer n, return *the number of **complete rows** of the staircase you will build*.
*/
#include <bits/stdc++.h>

using namespace std;
int arrangeCoins(int n) {
    int i=0;
    int j=n;

    while(i<=j)
    {
        long long m=(i+j)/2;
        if((m*(m+1))/2 >n)
        j=m-1;
        else
        {
            i=m+1;
            
        }
    }
    return (int)i-1;
}

int main(){
    int n; // value of n
    cin >> n;
    cout << arrangeCoins(n);
}
