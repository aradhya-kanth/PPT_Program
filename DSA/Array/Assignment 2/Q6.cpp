/*
Question 6

Given an array of integers nums which is sorted in ascending order, and an integer target,
write a function to search target in nums. If target exists, then return its index. Otherwise,
return -1.
You must write an algorithm with O(log n) runtime complexity.
*/
#include <bits/stdc++.h>

using namespace std;
int atIndex(vector<int> &nums, int target){
    int i = 0;
    int j = nums.size() - 1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            j = mid - 1;
        else
            i = mid + 1;
    }
    return -1;
}
int main(){
    int n; // size of vector
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i)
        cin >> nums[i];
    int target; // value of target
    cin >> target;
    cout << atIndex(nums, target);
}
