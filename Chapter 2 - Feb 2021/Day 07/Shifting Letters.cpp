/*
Author : Shreeraksha R Aithal
Problem name : Shifting Letters
Problem link : https://leetcode.com/problems/shifting-letters/
Difficulty : Medium
Tags : String
*/

class Solution {
public:
    string shiftingLetters(string S, vector<int>& shifts) {
        int i,j,n = S.size();
        for(i=n-2;i>=0;i--){
            shifts[i] = (shifts[i]+shifts[i+1])%26;
        }
        for(i=0;i<n;i++){
            j = (S[i] - 'a' + shifts[i])%26;
            S[i] = 'a' + j;
        }
        return S;
    }
};