/*
Author : Shreeraksha R Aithal
Problem name : Odd Selection
Problem link : https://codeforces.com/problemset/problem/1363/A
Rating : 1300
Tags : Array, Two Pointers
*/

#include<bits/stdc++.h> 
using namespace std;
 
int main(){
    int n,i,t,x,odd,even,a;
    cin>>t;
    while(t--){
        cin>>n>>x;
        odd = even = 0;
        for(i=0;i<n;i++){
            cin>>a;
            if(a%2 == 0)    even++;
            else    odd++;
        }
        if(odd==0){
            cout<<"No\n";
            continue;
        }
        odd--;
        x--;
        if(x%2 == 1){
            if(even==0){
                cout<<"No\n";
                continue;
            }
            else{
                even--;
                x--;
            }
        }
        odd = (odd%2 == 0) ? odd : odd-1;
        x = max(0,x-odd);
        if(x==0)    cout<<"Yes\n";
        else{
            if(x<=even)     cout<<"Yes\n";
            else    cout<<"No\n";
        }
    }
    return 0;
}