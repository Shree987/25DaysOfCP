/*
Author : Shreeraksha R Aithal
Problem name : Lost Numbers
Problem link : https://codeforces.com/contest/1167/problem/B
Rating : 1400
Tags : Divide and Conquer, Interactive, Math
*/

#include<bits/stdc++.h>
#define mp make_pair
using namespace std;

int main(){
	map<int, pair<int,int>> m = { { 32, mp(4,8)}, { 60, mp(4,15)}, { 64, mp(4,16)}, { 92, mp(4,23)}, 
	    { 168, mp(4,42)}, { 120, mp(8,15)}, { 128, mp(8,16)}, { 184, mp(8,23)}, { 336, mp(8,42)}, 
	    { 240, mp(15,16)}, { 345, mp(15,23)}, { 630, mp(15,42)}, { 368, mp(16,23)}, { 672, mp(16,42)}, { 966, mp(23,42)}   };
	pair<int,int> p1,p2;
	int a;
	vector<int> v(6);
    fflush(stdout);
    cout<<"? 1 2\n";
    fflush(stdout);
    cin>>a;
    p1 = m[a];
    fflush(stdout);
    cout<<"? 1 3\n";
    fflush(stdout);
    cin>>a;
    p2 = m[a];
    if(p1.first == p2.first){
        v[0] = p1.first;    v[1] = p1.second;   v[2] = p2.second;
    }
    else if(p1.first == p2.second){
        v[0] = p1.first;    v[1] = p1.second;    v[2] = p2.first;
    }
    else if(p1.second == p2.first){
        v[0] = p1.second;    v[1] = p1.first;    v[2] = p2.second;
    }
    else{
        v[0] = p1.second;    v[1] = p1.first;    v[2] = p2.first;
    }
    fflush(stdout);
    cout<<"? 4 5\n";
    fflush(stdout);
    cin>>a;
    p1 = m[a];
    fflush(stdout);
    cout<<"? 4 6\n";
    fflush(stdout);
    cin>>a;
    p2 = m[a];
    if(p1.first == p2.first){
        v[3] = p1.first;    v[4] = p1.second;   v[5] = p2.second;
    }
    else if(p1.first == p2.second){
        v[3] = p1.first;    v[4] = p1.second;    v[5] = p2.first;
    }
    else if(p1.second == p2.first){
        v[3] = p1.second;    v[4] = p1.first;    v[5] = p2.second;
    }
    else{
        v[3] = p1.second;    v[4] = p1.first;    v[5] = p2.first;
    }
    fflush(stdout);
    cout<<"!";
    for(a=0;a<6;a++){
        cout<<" "<<v[a];
    }
    cout<<"\n";
	return 0;
}