/*
Author : Shreeraksha R Aithal
Problem name : Group Anagrams
Problem link : https://leetcode.com/problems/group-anagrams/
Difficulty : Medium
Tags : Hash Table, String
*/

class Solution {
private:
    vector<int> encode(string s){
        vector<int> v(26,0);
        for(auto c : s){
            v[c-'a']++;
        }
        return v;
    }
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string> > ans;
        vector<int> v;
        map<vector<int>, int> mp;
        for(auto str : strs){
            v = encode(str);
            if(mp.find(v) == mp.end()){
                mp[v] = ans.size();
                ans.push_back({str});
            }
            else{
                ans[mp[v]].push_back(str);
            }
        }
        return ans;
    }
};