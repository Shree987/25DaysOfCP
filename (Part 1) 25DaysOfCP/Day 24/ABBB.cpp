/*
Author : Shreeraksha R Aithal
Problem name : ABBB
Problem link : https://codeforces.com/problemset/problem/1428/C
Rating : -
Tags : IGreedy, Strings
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t,i,n,k;
    string str;
    cin>>t;
    while(t--){
        cin>>str;
        k = 0;
        for(auto s : str){
            if(s == 'A')    k++;
            else{
                if(k>0)    k--;
                else    k++;
            }
        }
        cout<<k<<"\n";
    }
    return 0;
}