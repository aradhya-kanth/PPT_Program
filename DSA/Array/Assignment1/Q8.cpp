/*
Q8. You have a set of integers s, which originally contains all the numbers from 1 to n.
Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.
*/
#include <bits/stdc++.h>

using namespace std;
int main(){
    // value of n
    int n;
    cin >> n;
    vector<int> s(n);
    for(int i=0;i<n;++i){
        cin >> s[i];
    }

    // main algorithm...
    vector<int> hsh(n+1, 0);
    for(int i=0;i<n;++i){
        hsh[s[i]]++;
    }
    int res[2];
    for(int i=1;i<n+1;++i){
        if (hsh[i] > 1){
            cout << "duplicate element: " << i << endl;
            res[0] = i;
        }
        if (hsh[i] == 0){
            cout << "lost element: " << i << endl;
            res[1] = i;
        }
    }
    cout << "Output" << endl;
    for(int i=0;i<2;++i){
        cout << res[i] << " ";
    }
}
