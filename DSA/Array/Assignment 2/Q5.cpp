/*
Question 5

Given an integer array nums, find three numbers whose product is maximum and return the
maximum product.
*/
#include <bits/stdc++.h>

using namespace std;
int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    return max((nums[0] * nums[1] * nums[n-1]), (nums[n-1] * nums[n-2] * nums[n-3]));
}
int main(){
    int n; // size of vcetor
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    cout << maximumProduct(nums);
}
