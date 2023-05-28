/*
Question 3

We define a harmonious array as an array where the difference between its maximum value
and its minimum value is exactly 1.
Given an integer array nums, return the length of its longest harmonious subsequence
among all its possible subsequences.
A subsequence of an array is a sequence that can be derived from the array by deleting some
or no elements without changing the order of the remaining elements.
*/
#include <bits/stdc++.h>

using namespace std;
int findLHS(vector<int>& nums) {
    int ans = 0;
    unordered_map<long, int> m;
    for(auto &item: nums){
        m[item]++;
    }
    for(auto &item: m){
        auto itr = m.find(item.first+1);
        if (itr!=m.end()){
            ans = max(ans, (item.second+itr->second));
        }
    }
    return ans;
}
int main(){
    int n; // size of vector
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    cout << "Longest subsequence: " << findLHS(nums);
}
