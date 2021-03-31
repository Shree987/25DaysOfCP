/*
Author : Shreeraksha R Aithal
Problem name : https://leetcode.com/problems/reverse-words-in-a-string/
Problem link : Reverse Words in a String
Difficulty : Medium
Tags : String
*/

class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = 0, j, k, n = s.size();
        while(i<n){
            while(i<n && s[i] == ' ')   i++;
            j = i+1;
            while(j<n && s[j] != ' ')   j++;
            if(i<n)     ans = s.substr(i, j-i) + " " + ans;
            i = j+1;
        }
        ans.pop_back();
        return ans;
    }
};