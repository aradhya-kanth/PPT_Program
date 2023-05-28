/*
Question 4

You have a long flowerbed in which some of the plots are planted, and some are not.
However, flowers cannot be planted in adjacent plots.
Given an integer array flowerbed containing 0's and 1's, where 0 means empty and 1 means
not empty, and an integer n, return true if n new flowers can be planted in the flowerbed
without violating the no-adjacent-flowers rule and false otherwise.
*/
#include <bits/stdc++.h>

using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        int prev = 0;
        int next = 1;
        int i=0;
        while(i<s && next<s && n!=0){
            if (flowerbed[i] != 1 && flowerbed[prev] != 1 && flowerbed[next] != 1){
                flowerbed[i] = 1;
                n--;
            }
            if (i==0)
                prev = 0;
            else
                prev++;
            i++;
            next++;
        }
        if (flowerbed[i] !=1 && flowerbed[prev] !=1 && n!=0){
            flowerbed[i] = 1;
            n--;
        }
        return n==0;
    }
int main(){
    int m; // size of flowerbed
    cin >> m;
    vector<int> flowerbed(m);
    for(int i=0;i<m;++i){
        cin >> flowerbed[i];
    }
    int n; // value of n
    cin >> n;
    if (canPlaceFlowers(flowerbed, n))
        cout << "Can be replaced";
    else
        cout << "can't be replaced";
}
