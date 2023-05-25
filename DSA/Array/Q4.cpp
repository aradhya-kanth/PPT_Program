/*
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.
The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
Increment the large integer by one and return the resulting array of digits.
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n; // denotes no. of digit
    cout << "No. of digit in number: ";
    cin >> n;

    // Enter digits by user
    vector<int> v(n);
    cout << "Enter digits of number" << endl;
    for(int i=0;i<n;++i){
        cin >> v[i];
    }

    // main algorithm applied...
    vector<int> res; // result stored in this vector
    int carry = 1;
    for(int i=n-1;i>=0;--i){
        int sum = v[i] + carry;
        res.push_back(sum%10);
        carry = sum/10;
    }
    if (carry != 0)
        res.push_back(carry);
    reverse(res.begin(), res.end());
    
    // display result
    cout << "Result would be... " << endl;
    for(int i=0;i<res.size();++i){
        cout << res[i] << " ";
    }
}
