/*
Question 6**
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears **once** or **twice**, return *an array of all the integers that appears **twice***.
You must write an algorithm that runs in O(n) time and uses only constant extra space.
*/
#include <bits/stdc++.h>

using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    for(int i=0;i<n;++i){
        int index = abs(nums[i]) - 1;
        if (nums[index] < 0){
            ans.push_back(abs(nums[i]));
        }
        else{
            nums[index] = -1*nums[index];
        }
    }
    return ans;
}
int main(){

    int n; // size of nums
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    vector<int> result = findDuplicates(nums);
    // display result
    for(int i=0;i<result.size();++i){
        cout << result[i] << " ";
    }
}
