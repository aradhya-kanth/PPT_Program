/*
Question 4**
Given two **0-indexed** integer arrays nums1 and nums2, return *a list* answer *of size* 2 *where:*

- answer[0] *is a list of all **distinct** integers in* nums1 *which are **not** present in* nums2*.*
- answer[1] *is a list of all **distinct** integers in* nums2 *which are **not** present in* nums1.

**Note** that the integers in the lists may be returned in **any** order.
*/
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());
    vector<vector<int>> v;
    vector<int> v1;
    for(auto &item: s1){
        if (s2.find(item) == s2.end())
            v1.push_back(item);
    }
    vector<int> v2;
    for(auto &item: s2){
        if (s1.find(item) == s1.end())
            v2.push_back(item);
    }
    v.push_back(v1);
    v.push_back(v2);
    return v;
}
int main(){
    int n1; // size of nums1
    cout << "Enter the size of nums1: ";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter the elements of nums1" << endl;
    for(int i=0;i<n1;++i){
        cin >> nums1[i];
    }
    int n2; // size of nums2
    cout << "Enter the size of nums2: ";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter the elements of nums2" << endl;
    for(int i=0;i<n2;++i){
        cin >> nums2[i];
    }
    vector<vector<int>> answer = findDifference(nums1, nums2);
    // displaying result
    for(int i=0;i<2;++i){
        for(int j=0;j<answer[i].size();++j){
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
}
