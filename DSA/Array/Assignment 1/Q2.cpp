/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed.
Then return the number of elements in nums which are not equal to val.
Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

- Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
- Return k.
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; // sizze of array
    cout << "Enter size of array: ";
    cin >> n;

    // take array element
    vector<int> v(n);
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    // input val
    int val;
    cin >> val;

    // main algorithm applied...
    int j = 0;
    for(int i=0;i<n;++i){
        if (v[i] != val){
            v[j] = v[i];
            j++;
        }
    }
    int no_element = j;
    int rest_size = n-j;
    while(rest_size--){
        v[j++] = val;
    }

    // display result
    cout << no_element << endl;
    for(int i=0;i<n;++i){
        cout << v[i] << " ";
    }
}
