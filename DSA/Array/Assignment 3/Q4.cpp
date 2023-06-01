/*
Given a sorted array of distinct integers and a target value, return the index if the
target is found. If not, return the index where it would be if it were inserted in
order.

You must write an algorithm with O(log n) runtime complexity.
*/
#include <bits/stdc++.h>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int i = 0;
    int j = nums.size() - 1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if (nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            i = mid+1;
        else
            j = mid-1;
    }
    return i>j ? i : j;
}

int main(){
    int n; // size of vector
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    int target; // value of target
    cin >> target;
    cout << searchInsert(nums, target);
}
