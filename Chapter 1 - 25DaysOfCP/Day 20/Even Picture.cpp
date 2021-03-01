/*
Author : Shreeraksha R Aithal
Problem name : Even Picture
Problem link : https://codeforces.com/problemset/problem/1368/C
Rating : 1500
Tags : Constructive Algorithm
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    cout<<(3*n)+4<<"\n";
    cout<<"0 0\n0 1\n";
    for(i=1;i<=n;i++){
        cout<<i<<" "<<i-1<<"\n";
        cout<<i<<" "<<i<<"\n";
        cout<<i<<" "<<i+1<<"\n";
    }
    cout<<n+1<<" "<<n<<"\n"<<n+1<<" "<<n+1<<"\n";
	return 0;
}