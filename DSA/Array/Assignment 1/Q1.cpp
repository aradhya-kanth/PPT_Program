/*
Q1. Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; // sizze of array
    cin >> n;

    // take array element
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    // input target
    int target;
    cin >> target;

    // main algorithm applied...
    vector<int> res; // result vector;
    // keep difference index in unordered_map
    unordered_map<int, int> mp;
    for(int i=0;i<n;++i){
        if (mp.find(v[i]) != mp.end()){
            res.push_back(mp[v[i]]);
            res.push_back(i);
            break;
        }
        mp[target - v[i]] = i;
    }
    
    // display result
    for(int i=0;i<res.size();++i){
        cout << res[i] << " ";
    }
    return 0;
}