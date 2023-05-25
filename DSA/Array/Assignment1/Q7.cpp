/*
Q7. Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the nonzero elements.
Note that you must do this in-place without making a copy of the array.

*/
#include <bits/stdc++.h>

using namespace std;
int main(){
    // size of array
    int n;
    cin >> n;
    // array elements
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    // main algorithm applied...
    int i = 0;
    int j = 0;
    while(i<n){
        if (v[i] != 0)
            v[j++] = v[i];
        ++i;
    }
    while(j<n){
        v[j++] = 0;
    }
    // display result
    for(int i=0;i<n;++i){
        cout << v[i] << " ";
    }
}
