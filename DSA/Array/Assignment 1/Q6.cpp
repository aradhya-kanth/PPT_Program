/*
Q6. Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

*/
#include <bits/stdc++.h>

using namespace std;
bool isTwice(vector<int> &v, int n){
    set<int> s(v.begin(), v.end());
    return s.size() == n;
}

int main(){
    // size of array
    int n;
    cin >> n;
    // array element
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }
    isTwice(v, n)? cout << "True": cout << "False";
}
