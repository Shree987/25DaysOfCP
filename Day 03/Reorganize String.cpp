/*
Author : Shreeraksha R Aithal
Problem name : Reorganize String
Problem link : https://leetcode.com/problems/reorganize-string/
Difficulty : Medium
Tags : Greedy, Heap, Sort, String
*/

bool compare(pair<int, char> p1, pair<int, char> p2){
    return p1.first >= p2.first;
}

class Solution {
public:
    string reorganizeString(string S) {
        vector<int> v(26,0);
        vector<pair<int, char>> vp;
        int i, n = S.size(), j;
        for(i=0;i<n;i++){
            v[S[i]-'a']++;
        }
        for(i=0;i<26;i++){
            if(v[i]>0)  vp.push_back({v[i], 'a'+i});
        }
        sort(vp.begin(), vp.end(), compare);
        if((n+1)/2 < vp[0].first)   return "";
        i = j = 0;
        while(i<n){
            if(vp[j].first == 0)     j++;
            S[i] = vp[j].second;
            vp[j].first--;
            i += 2;
        }
        i = 1;
        while(i<n){
            if(vp[j].first == 0)     j++;
            S[i] = vp[j].second;
            vp[j].first--;
            i += 2;
        }
        return S;
    }
};