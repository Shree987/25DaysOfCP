/*
Author : Shreeraksha R Aithal
Problem name : Anatoly and Cockroaches
Problem link : https://codeforces.com/problemset/problem/719/B
Rating : 1400
Tags : Greedy, Strings
*/

#include<bits/stdc++.h> 
using namespace std;
 
int main(){
    string s,t;
    int ans1=0,ans2=0,i,j,n;
    cin>>n>>s;
    t = s;
    i = 0;
    j = 1;
    while(i<n && j<n){
        while(i<n && s[i]=='r')    i+=2;
        while(j<n && s[j]=='b')    j+=2;
        if(i<n && j<n){
            ans1++;
            i+=2;
            j+=2;
        }
    }
    if(i>=n && j<n){
        for(;j<n;j+=2){
            if(s[j]!='b')   ans1++;
        }
    }
    else if(j>=n && i<n){
        for(;i<n;i+=2){
            if(s[i]=='b')   ans1++;
        }
    }
    i = 0;
    j = 1;
    while(i<n && j<n){
        while(i<n && t[i]=='b')    i+=2;
        while(j<n && t[j]=='r')    j+=2;
        if(i<n && j<n){
            ans2++;
            i+=2;
            j+=2;
        }
    }
    if(i>=n && j<n){
        for(;j<n;j+=2){
            if(t[j]!='r')   ans2++;
        }
    }
    else if(j>=n && i<n){
        for(;i<n;i+=2){
            if(t[i]=='r')   ans2++;
        }
    }
    cout<<min(ans1,ans2);
    return 0;
}