/*
Author : Shreeraksha R Aithal
Problem name : Negative Prefixes
Problem link : https://codeforces.com/problemset/problem/1418/B
Rating : 1300
Tags : Array, Greedy, Sorting
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,i,j;
    vector<int> v, u;
    cin>>t;
    while(t--){
        cin>>n;
        v.resize(n);
        u.resize(n);
        vector<int> st;
        for(i=0;i<n;i++)    cin>>v[i];
        for(i=0;i<n;i++){
            cin>>u[i];
            if(u[i] == 0)   st.push_back(v[i]);
        }
        sort(st.rbegin(), st.rend());
        j = 0;
        for(i=0;i<n;i++){
            if(u[i] == 1)   continue;
            v[i] = st[j++];
        }
        for(i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}