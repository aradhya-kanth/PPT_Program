/*
Question 7

An array is monotonic if it is either monotone increasing or monotone decreasing.
An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j]. An array nums is
monotone decreasing if for all i <= j, nums[i] >= nums[j].
Given an integer array nums, return true if the given array is monotonic, or false otherwise.
*/
#include <bits/stdc++.h>

using namespace std;
bool isMonotone(vector<int> &nums){
    bool incr_flag = true;
    bool decr_flag = true;
    for(int i=1;i<nums.size();++i){
        if ((incr_flag) && (nums[i-1] < nums[i])){
            incr_flag = false;
        }
        if ((decr_flag) && (nums[i-1] > nums[i])){
            decr_flag = false;
        }
    }
    return incr_flag || decr_flag;
}
int main(){
    int n; // size of vector
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    if (isMonotone(nums))
        cout << "true";
    else
        cout << "false";
}
