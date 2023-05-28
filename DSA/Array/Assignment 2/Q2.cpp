/*
Question 2

Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started
to gain weight, so she visited a doctor.
The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice
likes her candies very much, and she wants to eat the maximum number of different types of
candies while still following the doctor's advice.
Given the integer array candyType of length n, return the maximum number of different types
of candies she can eat if she only eats n / 2 of them.
*/
#include <bits/stdc++.h>

using namespace std;
int distribute(vector<int> &candyType){
    set<int> s;
    int n = candyType.size();
    for(int i=0;i<n;++i){
        s.insert(candyType[i]);
    }
    if (s.size()<(n/2))
        return s.size();
    return n/2;
}
int main(){
    int n; // array size
    cin >> n;
    // element size
    vector<int> candyType(n);
    for(int i=0;i<n;++i){
        cin >> candyType[i];
    }
    cout << distribute(candyType);
}
