/*
Author : Shreeraksha R Aithal
Problem name : Generate a String With Characters That Have Odd Counts
Problem link : https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/
Difficulty : Easy
Tags : String
*/

class Solution {
public:
    string generateTheString(int n) {
        string s = string(n, 'a');
        if(n%2 == 0)    s[0] = 'b';
        return s;
    }
};