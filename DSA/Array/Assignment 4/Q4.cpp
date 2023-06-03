/*
Question 4
Given an integer array nums of 2n integers, group these integers into n pairs (a1, b1), (a2, b2), ..., (an, bn)
such that the sum of min(ai, bi) for all i is maximized. Return the maximized sum.
*/
#include <bits/stdc++.h>

using namespace std;

int maximizedSum(vector<int> &nums){
    sort(nums.begin(), nums.end());
    int total = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        total += nums[i];
    }
    return total;
}
int main(){
    int n; // size of nums
    cin >> n;
    vector<int> nums(n);
    cout << "Enter array elements " << endl;
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    cout << maximizedSum(nums);
}
