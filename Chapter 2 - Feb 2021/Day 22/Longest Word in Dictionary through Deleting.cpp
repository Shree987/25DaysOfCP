/*
Author : Shreeraksha R Aithal
Problem name : Longest Word in Dictionary through Deleting
Problem link : https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/
Difficulty : Medium
Tags : Sort, Two Pointers
*/

class Solution {
private:
    bool check(string s, string str){
        int i, j = 0, m = str.size();
        for(i = 0;j<str.size() && i < s.size(); i++){
            if(s[i] == str[j])  j++;
        }
        return (j == str.size());
    }
public:
    string findLongestWord(string s, vector<string>& d) {
        string ans = "";
        sort(d.begin(), d.end());
        for(auto str : d){
            if(check(s,str)){
                if(str.size() > ans.size())
                    ans = str;
            }
        }
        return ans;
    }
};