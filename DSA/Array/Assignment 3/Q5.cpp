/*
You are given a large integer represented as an integer array digits, where each
digits[i] is the ith digit of the integer. The digits are ordered from most significant
to least significant in left-to-right order. The large integer does not contain any
leading 0's.

Increment the large integer by one and return the resulting array of digits.
*/

#include <bits/stdc++.h>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
    vector<int> v;
    int carry = 1;
    int i = digits.size()-1;
    while(carry!=0 || i>=0)
    {
        int sum;
        if (i<0)
        {
            sum = carry;
        }
        else
        {
            sum = digits[i] + carry;
        }
        v.push_back((sum%10));
        carry = (sum/10);
        i--;
    }
    reverse(v.begin(), v.end());
    return v;
}
int main(){
    int n; // number of digit in number;
    cin >> n;
    vector<int> digits(n);
    for(int i=0;i<n;++i){
        cin >> digits[i];
    }
    vector<int> result = plusOne(digits);
    // displaying result
    for(int i=0;i<result.size();++i){
        cout << result[i] << " ";
    }
}