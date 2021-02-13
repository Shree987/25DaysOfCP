/*
Author : Shreeraksha R Aithal
Problem number : 989
Problem name : Add to Array-Form of Integer
Problem link : https://leetcode.com/problems/add-to-array-form-of-integer/
Difficulty : Easy
Tags : Array
*/

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int n = A.size()-1;
        while(n>=0 && K>0){
            A[n] += K%10;
            K = K/10;
            K += A[n]/10;
            A[n] %= 10;
            n--;            
        }
        while(K>0){
            A.insert(A.begin(), K%10);
            K = K/10;
        }
        return A;
    }
};