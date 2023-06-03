/*
Question 1
Given three integer arrays arr1, arr2 and arr3 sorted in strictly increasing order,
return a sorted array of only the integers that appeared in all three arrays.
*/
#include <bits/stdc++.h>

using namespace std;
void Intersection(vector<int> arr1, vector<int> arr2, vector<int> arr3, int n1, int n2, int n3){
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr3[k])
            j++;
        else
            k++;
    }
}

int main(){
    int n1; // size of arr1;
    cout << "Enter the size of array1: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the element of arr1" << endl;
    for(int i=0;i<n1;++i){
        cin >> arr1[i];
    }
    int n2; // size of arr1;
    cout << "Enter the size of array2: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the element of arr2" << endl;
    for(int i=0;i<n2;++i){
        cin >> arr2[i];
    }
    int n3; // size of arr1;
    cout << "Enter the size of array3: ";
    cin >> n3;
    vector<int> arr3(n3);
    cout << "Enter the element of arr3" << endl;
    for(int i=0;i<n3;++i){
        cin >> arr3[i];
    }
    cout << "Intersection elements are..." << endl;
    Intersection(arr1, arr2, arr3, n1, n2, n3);
}