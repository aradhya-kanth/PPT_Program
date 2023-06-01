/*
Question 1
Given an integer array nums of length n and an integer target, find three integers
in nums such that the sum is closest to the target.
Return the sum of the three integers.

You may assume that each input would have exactly one solution.
*/
#include <bits/stdc++.h>

using namespace std;

int threeSumClosest(vector<int>& nums, int target) {
    int n = nums.size();
    sort(nums.begin(), nums.end()); // sorting of numsay
    map<int, int> mp;
    for (int i = 0; i <= n - 3; ++i) {
        int k = i + 1;
        int j = n - 1;
        while (k < j) {
            if ((nums[k] + nums[j] + nums[i]) == target) {
                mp.insert({(target - target), target});
                break;
            } else if ((nums[k] + nums[j]) > (target - nums[i])) {
                mp.insert(make_pair(abs(target - (nums[i] + nums[j] + nums[k])), (nums[i] + nums[j] + nums[k])));
                j--;
            } else {
                mp.insert(make_pair(abs(target - (nums[i] + nums[j] + nums[k])), (nums[i] + nums[j] + nums[k])));
                k++;
            }
        }
    }
    auto it = mp.begin();
    return (it->second);
}
int main() {
    int n; // size of vector
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    int target; // target
    cin >> target;
    cout << threeSumClosest(nums, target);
}

