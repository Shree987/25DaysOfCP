/*
Author : Shreeraksha R Aithal
Problem name : Walking Robot
Problem link : https://codeforces.com/problemset/problem/1154/D
Rating : 1500
Tags : Greedy
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,A,i,n,m;
    cin>>n>>b>>A;
    a = A;
    for(i=1; i<=n && a+b>0; i++){
        cin>>m;
        if(m == 0){
            if(a>0) a--;
            else    b--;
        }
        else{
            if(b>0){
                if(a<A){
                    b--;
                    a++;
                }
                else	a--;
            }
            else	a--;
        }
    }
    cout<<i-1;
    return 0;
}