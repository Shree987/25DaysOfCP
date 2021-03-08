/*
Author : Shreeraksha R Aithal
Problem name : Remove Palindromic Subsequences
Problem link : https://leetcode.com/problems/remove-palindromic-subsequences/
Difficulty : Easy
Tags : String
*/

class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size() < 2)   return s.size();   
        for(int i = 0, n = s.size(); i<n-i; i++){
            if(s[i] != s[n-i-1])    return 2;
        }
        return 1;
    }
};