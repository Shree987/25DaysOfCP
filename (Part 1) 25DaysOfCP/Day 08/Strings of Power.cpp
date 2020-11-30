/*
Author : Shreeraksha R Aithal
Problem name : Strings of Power
Problem link : https://codeforces.com/problemset/problem/318/B
Rating : 1300
Tags : Strings
*/

#include<bits/stdc++.h> 
using namespace std;
 
int main(){
    string s,st;
    int i,n;
    vector<unsigned long long> v(2,0);
    cin>>s;
    n = s.size();
    for(i=0;i<n-4;i++){
        st = s.substr(i,5);
        if(st == "heavy")   v[0]++;
        else if(st == "metal")  v[1]+=v[0];
    }
    cout<<v[1];
    return 0;
}