/*
Author : Shreeraksha R Aithal
Problem name : Check If a String Contains All Binary Codes of Size K
Problem link : https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k/
Difficulty : Medium
Tags : Bit Manipulation, String
*/

class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 0, n = s.size(), j;
        while(i<n && s[i] == '0')       i++;
        if(i == n)  return true;
        while(i<n && s[i] == '1')     i++;
        while(i<n && s[i] == '0')     i++;
        return i == n;
    }
};