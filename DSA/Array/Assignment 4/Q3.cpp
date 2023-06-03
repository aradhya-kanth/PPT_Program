/*
Question 3
Given a 2D integer array matrix, return *the **transpose** of* matrix.

The **transpose** of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.
*/
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans(m, vector<int>(n, 0)); // Create a matrix with dimensions m x n

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ans[j][i] = matrix[i][j]; // Swap indices i and j
        }
    }
    return ans;
}

int main() {
    int row; // size of row
    cout << "Enter the size of row: ";
    cin >> row;

    int col; // size of column
    cout << "Enter the size of column: ";
    cin >> col;

    vector<vector<int>> matrix(row, vector<int>(col, 0)); // Create a matrix with dimensions row x col

    cout << "Enter matrix elements: " << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> matrix[i][j];
        }
    }

    vector<vector<int>> answer = transpose(matrix);

    // displaying results
    cout << "After Transpose" << endl;
    for (int i = 0; i < answer.size(); ++i) {
        for (int j = 0; j < answer[i].size(); ++j) {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
