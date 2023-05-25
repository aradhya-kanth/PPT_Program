/*
Given a sorted array of distinct integers and a target value, return the index if the target is found.
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n; // sizze of array
    cout << "Enter size of array: ";
    cin >> n;

    // take array element
    vector<int> v(n);
    cout << "Enter array elements " << endl;
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    // input target element
    int target;
    cout << "Enter target element: ";
    cin >> target;

    // algorithm code
    bool flag = false;
    int i = 0;
    int j = n-1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if (v[mid]== target){
            cout << "Element found at index: " << mid;
            flag = true;
            break;
        }
        if (v[mid] < target){
            i = mid+1;
        }
        else if (v[mid] > target){
            j = mid-1;
        }
    }
    // if not found
    if (!flag)
        cout << "Element not found! But if found it would be on index: " << j+1;
}