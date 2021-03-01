/*
Author : Shreeraksha R Aithal
Problem name : Barrels
Problem link : https://codeforces.com/problemset/problem/1430/B
Rating : -
Tags : Greedy, Sorting
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,i,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<long long> V(n);
        for(i=0;i<n;i++)    cin>>V[i];
        sort(V.begin(), V.end());
        for(i=n-2; i>=0 && V[i]>0 && k>0;i--,k--){
            V[n-1]+=V[i];
            V[i]=0;
        }
        cout<<V[n-1]<<"\n";
    }
    return 0;
}