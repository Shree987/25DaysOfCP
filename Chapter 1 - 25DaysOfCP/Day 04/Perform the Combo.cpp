/*
Author : Shreeraksha R Aithal
Problem name : Perform the Combo
Problem link : https://codeforces.com/problemset/problem/1311/C
Rating : 1300
Tags : Brute Force, Strings
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int i,t,index,n,m,k;
    string str;
    cin>>t;
    while(t--){
        cin>>n>>m>>str;
        vector<int> v(m,0),u(n+1,0),a(26, 0);
        for(i=0;i<m;i++){
            cin>>v[i];
            v[i]--;
        }
        sort(v.begin(), v.end());
        i = m-1;
        for(k=n-1;k>=0;k--){
            if(i<0 || v[i]<k)     u[k] += u[k+1];
            else if(v[i] == k){
                u[k]++;
                i--;
                k++;
            }
        }
        for(i=0;i<n;i++){
            index = str[i]-'a';
            a[index]+=u[i]+1;
        }
        for(i=0;i<26;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}