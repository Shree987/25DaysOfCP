/*
Author : Shreeraksha R Aithal
Problem name : Palindromic Substrings
Problem link : https://leetcode.com/problems/palindromic-substrings/
Difficulty : Medium
Tags : String, Dynamic Programming
*/

class Solution {
public:
    int countSubstrings(string s) {
        int i, n = s.size(), x, y, cnt = 0;
        for(i=0;i<n;i++){
            cnt++;
            x = i-1;
            y = i+1;
            while(x>=0 && y<n && s[x]==s[y]){
                cnt++;
                x--;
                y++;
            }
        }
        for(i=0;i<n-1;i++){
            if(s[i] != s[i+1])    continue;
            cnt++;
            x = i-1;
            y = i+2;
            while(x>=0 && y<n && s[x]==s[y]){
                cnt++;
                x--;
                y++;
            }
        }
        return cnt;
    }
};