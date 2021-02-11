/*
Author : Shreeraksha R Aithal
Problem number : 3
Problem name : Longest Substring Without Repeating Characters
Problem link : https://leetcode.com/problems/longest-substring-without-repeating-characters/
Difficulty : Medium
Tags : Hash Table, String, Sliding Window, Two Pointers
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i, j, n = s.size(), ans = 0;
        vector<int> index(300,-1);
        j = -1;
        for(i=0;i<n;i++){
            j = max(index[s[i]], j);
            index[s[i]] = i;
            ans = max(ans, i-j);
        }
        return ans;
    }
};