/*
Question 7
You are given an m x n matrix M initialized with all 0's and an array of operations ops,
where ops[i] = [ai, bi] means M[x][y] should be incremented by one for all 0 <= x < ai and 0 <= y < bi.
Count and return *the number of maximum integers in the matrix after performing all the operations*
*/
#include <bits/stdc++.h>

using namespace std;

int maxCount(int m, int n, vector<vector<int>>& ops) {
    int min_row = m;
    int min_col = n;
    for (int i=0; i<ops.size(); i++){
        if (ops[i][0]<min_row) min_row=ops[i][0];
        if (ops[i][1]<min_col) min_col=ops[i][1];
    }        
    return min_row*min_col;
}

int main(){
    int row; // size of row
    cout << "Enter the size of row: ";
    cin >> row;

    int col; // size of column
    cout << "Enter the size of column: ";
    cin >> col;
    int p;
    cout << "Enter size of Ops matrix: ";
    cin >> p;
    vector<vector<int>> ops(p, vector<int>(2, 0));
    cout << "Enter Ops elements: " << endl;
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> ops[i][j];
        }
    }
    cout << maxCount(row, col, ops);
}
