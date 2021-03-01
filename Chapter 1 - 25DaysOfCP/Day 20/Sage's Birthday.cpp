/*
Author : Shreeraksha R Aithal
Problem name : Sage's Birthday
Problem link : https://codeforces.com/problemset/problem/1419/D2
Rating : 1500
Tags : Sorting
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int i,n,m=0,j;
    cin>>n;
    vector<int> v(n),u(n);
    for(i=0;i<n;i++)        cin>>v[i];
    sort(v.begin(), v.end());
    j=1;
    for(i=0;i<n;i++){
        if(j>=n)    j=0;
        u[j] = v[i];
        j+=2;
    }
    for(i=1;i<n-1;i++){
        if(u[i]<u[i+1] && u[i]<u[i-1])  m++;
    }
    cout<<m<<"\n";
    for(i=0;i<n;i++){
        cout<<u[i]<<" ";
    }
	return 0;
}