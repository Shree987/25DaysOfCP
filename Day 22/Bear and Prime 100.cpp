/*
Author : Shreeraksha R Aithal
Problem name : Bear and Prime 100
Problem link : https://codeforces.com/problemset/problem/679/A
Rating : 1400
Tags : Interactive
*/

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int N,i,V[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47}, M[] = {4,9,25,49};
    string str;
    bool b = false;
    for(auto m : M){
        fflush(stdout);
        cout<<m<<"\n";
        fflush(stdout);
        cin>>str;
        if(str == "yes"){
            fflush(stdout);
            cout<<"composite\n";
        }
    }
    for(auto v : V){
        fflush(stdout);
        cout<<v<<"\n";
        fflush(stdout);
        cin>>str;
        if(str == "yes"){
            if(b){
                fflush(stdout);
                cout<<"composite\n";
            }
            b = true;
        }
    }
    fflush(stdout);
    cout<<"prime\n";
    return 0;
}