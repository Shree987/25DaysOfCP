/*
Author : Shreeraksha R Aithal
Problem name : Omkar and Last Class of Math
Problem link : https://codeforces.com/problemset/problem/1372/B
Rating : 1300
Tags : Greedy, Math
*/

#include<bits/stdc++.h> 
using namespace std;
 
int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%2 == 0){
            cout<<n/2<<" "<<n/2<<"\n";
        }
        else{
            for(i=2;i<=1000000;i++){
                if(n%i == 0){
                    cout<<n/i<<" "<<n-(n/i)<<"\n";
                    break;
                }
            }
            if(i>1000000)   cout<<"1 "<<n-1<<"\n";
        }
    }
    return 0;
}