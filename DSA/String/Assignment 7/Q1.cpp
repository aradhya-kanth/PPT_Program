/*
Question 1**
Given two strings s and t, *determine if they are isomorphic*.
Two strings s and t are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.
*/
#include <bits/stdc++.h>

using namespace std;
bool isIsomorphic(string s, string t) {
    int n = s.size();
    int m = t.size();
    if (n != m) return false;
    unordered_map<char, char> map1;
    unordered_map<char, char> map2;
    for(int i=0;i<n;++i){
        if (!map1.count(s[i]) && !map2.count(t[i])){
            map1[s[i]] = t[i];
            map2[t[i]] = s[i];
        }
        else if (map1[s[i]] != t[i])
            return false;
    }
    return true;
}
int main(){
    string s; // string s
    cin >> s;
    string t; // string t
    cin >> t;
    if (isIsomorphic(s, t))
        cout << "It is isomorphic";
    else{
        cout << "It is not isomorphic";
    }
    return 0;
}
