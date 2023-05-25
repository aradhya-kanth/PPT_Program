/*
Q5. You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.
Merge nums1 and nums2 into a single array sorted in non-decreasing order.
The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int m; // size of 1st array array
    cin >> m;

    // size of 2nd array
    int n;
    cin >> n;

    // accomodate nums1 array of size m+n
    // Enter element of 1st array
    vector<int> nums1(m+n, 0);
    for(int i=0;i<m;++i){
        cin >> nums1[i];
    }
    // Enter element of 2nd array
    vector<int> nums2(n);
    for(int i=0;i<n;++i){
        cin >> nums2[i];
    }
    // make a temporary array of nums of size m
    vector<int> nums3(m);
    for(int i=0;i<m;++i){
        nums3[i] = nums1[i];
    }

    // main algorithm applied...
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<m && j<n){
        if (nums3[i] < nums2[j])
            nums1[k++] = nums3[i++];
        else
            nums1[k++] = nums2[j++];
    }
    while(i<m){
        nums1[k++] = nums3[i++];
    }
    while (j<n)
    {
        nums1[k++] = nums2[j++];
    }
    
    // display nums1
    for(int i=0;i<m+n;++i){
        cout << nums1[i] << " ";
    }
    return 0;
}
