/*
Author : Shreeraksha R Aithal
Problem name : Flamingoes of Mystery
Problem link : https://codeforces.com/problemset/problem/1425/F
Rating : 1400
Tags : Intractive
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N,i,a;
    cin>>N;
    vector<int> v(N);
    fflush(stdout);
    cout<<"? 1 2\n";
    fflush(stdout);
    cin>>v[2];
    fflush(stdout);
    cout<<"? 2 3\n";
    fflush(stdout);
    cin>>v[0];
    fflush(stdout);
    cout<<"? 1 3\n";
    fflush(stdout);
    cin>>v[1];
    v[0] = v[1]-v[0];
    v[2] = v[1]-v[2];
    v[1] = v[1]-v[0]-v[2];
    for(i=3;i<N;i++){
        fflush(stdout);
        cout<<"? "<<i<<" "<<i+1<<"\n";
        fflush(stdout);
        cin>>a;
        v[i]=a-v[i-1];
    }
    fflush(stdout);
    cout<<"!";
    for(i=0;i<N;i++){
        cout<<" "<<v[i];
    }
    cout<<"\n";
    return 0;
}