/*
Question 2
Given an array nums of n integers, return an array of all the unique quadruplets
[nums[a], nums[b], nums[c], nums[d]] such that:
           ● 0 <= a, b, c, d < n
           ● a, b, c, and d are distinct.
           ● nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in any order.
*/
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    sort(nums.begin(),nums.end());
    vector<vector<int>> vec;
    map<vector<int>,int>map;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
        
            int start=j+1;
            int end = nums.size()-1;

            while(start<end){
                long long currentsum =nums[start]+nums[end]+nums[i]*1ll+nums[j];
                if(currentsum==target){
                    vector<int>ans;
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]); 
                    ans.push_back(nums[start]);
                    ans.push_back(nums[end]);
                    if(map[ans]==0){
                        map[ans]=1;
                        vec.push_back(ans);
                        }
                    start++;
                }
                else if(currentsum<target){
                    start++;
                }
                else{
                    end--;
                }

            }
        }
    }
    return vec;   
}
int main(){
    int n; // size of vector
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;++i){
        cin >> nums[i];
    }
    int target; // value of target variable
    cin >> target;
    vector<vector<int>> v = fourSum(nums, target);
    for(int i=0;i<v.size();++i){
        for(int j=0;j<v[i].size();++j){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
