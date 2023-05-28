/*
Question 8

You are given an integer array nums and an integer k.
In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i]
to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at
most once for each index i.
The score of nums is the difference between the maximum and minimum elements in nums.
Return the minimum score of nums after applying the mentioned operation at most once for
each index in it.
*/
#include <bits/stdc++.h>

using namespace std;
int scoreOfNums(vector<int>& nums, int k) {
    int max_el = nums[0];
    int min_el = nums[0];
    for(int i=1;i<nums.size();++i){
        if (nums[i] > max_el)
            max_el = nums[i];
        if (nums[i] < min_el)
            min_el = nums[i];
    }
    if ((min_el + k) >= (max_el - k))
        return 0;
    return ((max_el - k) - (min_el + k));
    }
int main(){
    int n; // size of vector
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    int k;
    cin >> k;
    cout << scoreOfNums(nums, k);
}
