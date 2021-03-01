/*
Author : Shreeraksha R Aithal
Problem name : Reorder the Array
Problem link : https://codeforces.com/problemset/problem/1007/A
Rating : 1300
Tags : Array, Sorting, Two Pointers
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,j;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++)    cin>>v[i];
    sort(v.begin(), v.end());
    j = 0;
    for(i=0;i<n;i++){
        if(v[j]<v[i])   j++;
    }
    cout<<j;
    return 0;
}