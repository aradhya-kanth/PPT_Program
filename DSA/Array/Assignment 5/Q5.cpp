/*
Question 5**
Given two integer arrays arr1 and arr2, and the integer d, *return the distance value between the two arrays*.
The distance value is defined as the number of elements arr1[i] such that there is not any element arr2[j] where |arr1[i]-arr2[j]| <= d.
*/
#include <bits/stdc++.h>

using namespace std;
int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
    sort(arr2.begin(),arr2.end());
        int result = 0;
        for(int i = 0; i<arr1.size(); i++)
    {
        int low = 0;
        int high = arr2.size()-1;
        while(low <= high)
        {
            int mid=low +(high-low)/2;
            if(abs(arr1[i]-arr2[mid]) <= d)
            {
                break;
            }if(arr2[mid] < arr1[i]){
                low = mid +1;
            }else{
                high = mid-1;
            }
        }
        if(low > high){
            result++;
        }
    }
    return result;
}
int main(){
    int n1; // size of arr1
    cin >> n1;
    vector<int> arr1(n1);
    for(int i=0;i<n1;++i){
        cin >> arr1[i];
    }
    int n2; // size of arr2
    cin >> n2;
    vector<int> arr2(n2);
    for(int i=0;i<n2;++i){
        cin >> arr2[i];
    }
    int d; // value of d
    cin >> d;
    // display result
    cout << findTheDistanceValue(arr1, arr2, d);
}
