/*
Question 1

Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2),
..., (an, bn) such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; // array size
    cin >> n;
    // element size
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int sum = 0;
    int i = 0;
    while(i<n){
        sum += v[i];
        i = i+2;
    }
    cout << sum;
}
