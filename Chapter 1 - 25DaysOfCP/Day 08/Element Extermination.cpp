/*
Author : Shreeraksha R Aithal
Problem name : Element Extermination
Problem link : https://codeforces.com/problemset/problem/1416/A
Rating : 1400
Tags : Greedy
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,t,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a;
        for(i=1;i<n;i++)    cin>>b;
        if(a<b)     cout<<"YES\n";
        else        cout<<"NO\n";
    }
    return 0;
}