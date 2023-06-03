/*
Question 8**
Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].
Return the array in the form* [x1,y1,x2,y2,...,xn,yn].
*/
#include <bits/stdc++.h>

using namespace std;
vector<int> shuffle(vector<int>& nums, int n) {
    vector<int> result(2 * n);
    for (int i = 0; i < n; ++i) {
        result[2 * i] = nums[i];n;
        result[2 * i + 1] = nums[n + i];
    }
    return result;
}

int main(){
    int n; // value of n;
    cout << "Enter value of n: ";
    cin >> n;
    vector<int> nums(2*n);
    for(int i=0;i<2*n;++i){
        cin >> nums[i];
    }
    vector<int> answer = shuffle(nums, n);
    // display result
    cout << "Result is..." << endl;
    for(int i=0;i<2*n;++i){
        cout << answer[i] << " ";
    }
}
