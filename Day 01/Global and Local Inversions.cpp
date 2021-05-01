/*
Author : Shreeraksha R Aithal
Problem name : Global and Local Inversions
Problem link : https://leetcode.com/problems/global-and-local-inversions/
Difficulty : Medium
Tags : Array, Math
*/

class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int m = A[A.size()-1];
        for(int i=A.size()-3; i>=0; i--){
            if(A[i] > m)    return false;
            m = min(m, A[i+1]);
        }
        return true;
    }
};