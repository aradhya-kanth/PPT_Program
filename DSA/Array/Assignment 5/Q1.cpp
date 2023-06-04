/*
Question 1

Convert 1D Array Into 2D Array

You are given a **0-indexed** 1-dimensional (1D) integer array original, and two integers,m and n.
You are tasked with creating a 2-dimensional (2D) array with  m rows and n columns using **all** the elements from original.
The elements from indices 0 to n - 1 (**inclusive**) of original should form the first row of the constructed 2D array, the elements from indices n to 2 * n - 1 (**inclusive**) should form the second row of the constructed 2D array, and so on.
Return *an* m x n *2D array constructed according to the above procedure, or an empty 2D array if it is impossible*.
*/
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    if(m*n != original.size())
    {
        return {};
    }
    vector<vector<int>> matrix;
    int s=original.size();
    vector<int> row;
    for(int i=0;i<s;i++)
    {
        row.push_back(original[i]);
        if(row.size()==n)
        {
            matrix.push_back(row);
            row.clear();
        }
    }
    return matrix;
}
int main(){
    int k; // size of origibnal vector
    cin >> k;
    vector<int> original(k);
    for(int i=0;i<k;++i){
        cin >> original[i];
    }
    int m; // value of m
    cin >> m;
    int n; // value of n
    cin >> n;
    vector<vector<int>> res = construct2DArray(original, m, n);
    // displaying result
    for(int i=0;i<res.size();++i){
        for(int j=0;j<res[i].size();++j){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}