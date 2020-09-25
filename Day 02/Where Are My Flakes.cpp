/*
Author : Shreeraksha R Aithal
Problem name : Where Are My Flakes?
Problem link : https://codeforces.com/problemset/problem/60/A
Rating : 1300
Tags : Array, Two Pointers
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,left,right,m;
    bool l;
    string s;
    cin>>n>>k;
    right = 0;
    left = n+1;
    while(k--){
        cin>>s>>s>>s;
        l = (s == "left") ? true : false;
        cin>>s>>m;
        if(l)   left = min(left,m);
        else    right = max(right,m);
        if(left<=right+1){
            cout<<"-1";
            return 0;
        }
    }
    cout<<left-right-1;
    return 0;
}