/*
Question 8**
An integer array original is transformed into a **doubled** array changed by appending **twice the value** of every element in original, and then randomly **shuffling** the resulting array.
Given an array changed, return original *if* changed *is a **doubled** array. If* changed *is not a **doubled** array, return an empty array. The elements in* original *may be returned in **any** order*.
*/
#include <bits/stdc++.h>

using namespace std;
int next(int l,vector<int> &changed){
    while(l<changed.size() && changed[l]==-1){
        l++;
    }
    return l;
}
vector<int> findOriginalArray(vector<int>& changed) {
    sort(changed.begin(),changed.end());
    int l=0,h=1,n=changed.size(),count=0;
    if(n%2) return {};
    vector<int> ans;
    while(h<n){
        if((long long)changed[l]*2==changed[h]){
            count++;
            ans.push_back(changed[l]);
            changed[l]=-1;
            changed[h]=-1;
            l=next(l,changed);
            h++;
            if(l==h) h++;
        }else{
            h++;
        }
    }
    if(count!=n/2) ans={};
    return ans;
}
int main(){
    int n; // size of vector
    cin >> n;
    vector<int> changed(n);
    for(int i=0;i<n;++i){
        cin >> changed[i];
    }
    vector<int> Result = findOriginalArray(changed);
    // display result
    for(int i=0;i<Result.size();++i){
        cout << Result[i] << " ";
    }
}
