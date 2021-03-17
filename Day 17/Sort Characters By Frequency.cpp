/*
Author : Shreeraksha R Aithal
Problem name : Sort Characters By Frequency
Problem link : https://leetcode.com/problems/sort-characters-by-frequency/
Difficulty : Medium
Tags : Hash Table, Heap
*/

class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> vp;
        string ans = "";
        map<char,int> mp;
        for(auto c : s){
            if(mp[c] == 0){
                vp.push_back({1, c});
                mp[c] = vp.size();
            }
            else{
                vp[mp[c]-1].first++;
            }
        }
        sort(vp.rbegin(), vp.rend());
        for(auto p : vp){
            while(p.first > 0){
                ans.push_back(p.second);
                p.first--;
            }
        }
        return ans;
    }
};