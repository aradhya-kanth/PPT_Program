/*
Question 6
Given an integer array nums sorted in non-decreasing order,
return an array of the squares of each number sorted in non-decreasing order.
*/
#include <bits/stdc++.h>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size(), s = 0, e = n - 1;
    vector<int> ans(n);

    for(int i=n-1; i>=0; i--) {
        if(abs(nums[s]) < abs(nums[e])) ans[i] = nums[e] * nums[e--];
        else ans[i] = nums[s] * nums[s++];
    }
    return ans;
}

int main(){
    int n; // size of nums;
    cout << "Enter the size of nums array: ";
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    vector<int> answer = sortedSquares(nums);
    // display result
    cout << "Result is..." << endl;
    for(int i=0;i<answer.size();++i){
        cout << answer[i] << " ";
    }
}
