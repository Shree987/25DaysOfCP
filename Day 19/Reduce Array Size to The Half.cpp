/*
Author : Shreeraksha R Aithal
Problem name : Reduce Array Size to The Half
Problem link : https://leetcode.com/problems/reduce-array-size-to-the-half/
Difficulty : Medium
Tags : Array, Greedy
*/

bool Compare(const pair<int,int> &p1, const pair<int,int> &p2){
    if(p1.second != p2.second){
        return p1.second > p2.second;
    }
    return  p1.first<p2.first;
}

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mp;
        int i,m,j=0,n = arr.size();
        for(i=0;i<n;i++){
            mp[arr[i]]++;
        }
        vector<pair<int,int>> vp;
        vp.resize(mp.size());
        copy(mp.begin(), mp.end(), vp.begin());
        sort(vp.begin(),vp.end(), Compare);
        m = n;
        for(auto k : vp){
            if(m<=(n/2))  break;
            m -= k.second;
            j++;
        }
        return j;
    }
};