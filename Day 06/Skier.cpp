/*
Author : Shreeraksha R Aithal
Problem name : Skier
Problem link : https://codeforces.com/problemset/problem/1351/C
Rating : 1400
Tags : Data Structure
*/

#include<bits/stdc++.h> 
using namespace std;
 
int main(){
    int n,t,i,Time;
    string S;
    vector<int> sp(4);
    cin>>t;
    while(t--){
        Time = 0;
        sp[0] = sp[1] = sp[2] = sp[3] = 0;
        set<vector<int>> mp;
        cin>>S;
        n = S.size();
        for(i=0;i<n;i++){
            if(S[i]=='N')   sp[3]++;
            else if(S[i]=='S')  sp[3]--;
            else if(S[i]=='E')   sp[2]++;
            else if(S[i]=='W')  sp[2]--;
            if(mp.find(sp) != mp.end())     Time++;
            else{
                swap(sp[0],sp[2]);
                swap(sp[1],sp[3]);
                if(mp.find(sp) != mp.end())          Time++;
                else{
                    mp.insert(sp);
                    Time+=5;
                }
                swap(sp[0],sp[2]);
                swap(sp[1],sp[3]);
            }
            sp[0] = sp[2];
            sp[1] = sp[3];
        }
        cout<<Time<<"\n";
    }
    return 0;
}