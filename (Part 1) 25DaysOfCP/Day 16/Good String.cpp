/*
Author : Shreeraksha R Aithal
Problem name : Good String
Problem link : https://codeforces.com/problemset/problem/1165/C
Rating : 1300
Tags : Greedy, String
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k=0,n;
    string str;
    cin>>n>>str;
    k = 0;
    for(j=0;j<n;j++){
        i = j;
        j++;
        while(j<n && str[i]==str[j]){
            str[j] = '*';
            k++;
            j++;
        }
        if(j == n){
            str[i]='*';
            k++;
        }
    }
    cout<<k<<"\n";
    for(i=0;i<n;i++){
        if(str[i]!='*')     cout<<str[i];
    }
    return 0;
}