/*
Author : Shreeraksha R Aithal
Problem name : Longest Palindromic Substring
Problem link : https://leetcode.com/problems/longest-palindromic-substring/
Difficulty : Medium
Tags : String, Dynamic Programming
*/

class Solution {
public:
    string longestPalindrome(string s) {
        string str = "";
        str.push_back(s[0]);
        int i, n = s.size(), x, y;
        for(i=0;i<n;i++){
            x = i-1;
            y = i+1;
            while(x>=0 && y<n && s[x]==s[y]){
                if(y-x+1 > str.size()){
                    str = s.substr(x,y-x+1);
                }
                x--;
                y++;
            }
        }
        for(i=0;i<n-1;i++){
            if(s[i] != s[i+1])    continue;
            if(str.size() == 1){
                str = s.substr(i,2);
            }
            x = i-1;
            y = i+2;
            while(x>=0 && y<n && s[x]==s[y]){
                if(y-x+1 > str.size()){
                    str = s.substr(x,y-x+1);
                }
                x--;
                y++;
            }
        }
        return str;
    }
};