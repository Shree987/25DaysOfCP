/*
Author : Shreeraksha R Aithal
Problem name : Guess the Array
Problem link : http://codeforces.com/problemset/problem/727/C
Rating : 1400
Tags : Interactive, Math
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    vector<int> v(n);
    fflush(stdout);
    cout<<"? 1 2\n";
    fflush(stdout);
    cin>>a;
    fflush(stdout);
    cout<<"? 2 3\n";
    fflush(stdout);
    cin>>b;
    fflush(stdout);
    cout<<"? 1 3\n";
    fflush(stdout);
    cin>>v[2];
    fflush(stdout);
    a = (a+b+v[2])/2;
    v[1] = a - v[2];
    v[0] = a - b;
    v[2] = a - v[1] - v[0];
    for(a=3;a<n;a++){
        fflush(stdout);
        cout<<"? 1 "<<a+1<<"\n";
        fflush(stdout);
        cin>>v[a];
        v[a] -= v[0];
    }
    fflush(stdout);
    cout<<"! ";
    for(a=0;a<n;a++){
        cout<<v[a]<<" ";
    }
    cout<<"\n";
    fflush(stdout);
	return 0;
}