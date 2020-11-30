/*
Author : Shreeraksha R Aithal
Problem name : Brutality
Problem link : https://codeforces.com/problemset/problem/1107/C
Rating : 1300
Tags : Greedy, Sorting, Two Pointers
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i,j,K;
    unsigned long long cnt = 0;
    string str;
    cin>>n>>k;
    vector<int> v(n);
    for(i=0;i<n;i++)    cin>>v[i];
    cin>>str;
    priority_queue<int> pq;
    j = 0;
    for(i=0;i<n;i++){
        if(str[i] != str[j]){
            K = k;
            while(!pq.empty()){
                if(K>0)     cnt += pq.top();
                pq.pop();
                K--;
            }
            j = i;
            pq.push(v[i]);
        }
        else{
            pq.push(v[i]);
        }
    }
    K = k;
    while(!pq.empty()){
        if(K>0)     cnt += pq.top();
        pq.pop();
        K--;
    }
    cout<<cnt;
    return 0;
}