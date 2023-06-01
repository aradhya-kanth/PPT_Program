/*
You are given an inclusive range [lower, upper] and a sorted unique integer array
nums, where all elements are within the inclusive range.

A number x is considered missing if x is in the range [lower, upper] and x is not in
nums.

Return the shortest sorted list of ranges that exactly covers all the missing
numbers. That is, no element of nums is included in any of the ranges, and each
missing number is covered by one of the ranges.
*/

#include <bits/stdc++.h>

using namespace std;


int main(){
    int arr[] = {0, 1, 2, 4, 5, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<vector<int>> v;
    vector<int> temp;
    int k = 0;
    temp.push_back(arr[k]);
    for(int i=0;i<n-1;++i){
        if (arr[i] != (arr[i+1] - 1)){
            temp.push_back(arr[i]);
            v.push_back(temp);
            temp.clear();
            k = i+1;
            temp.push_back(arr[k]);
        }
    }
    temp.push_back(arr[n-1]);
    v.push_back(temp);
    for(int i=0;i<v.size();++i){
        for(int j=0;j<2;++j){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}