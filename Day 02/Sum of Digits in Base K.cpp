/*
Author : Shreeraksha R Aithal
Problem name : Sum of Digits in Base K
Problem link : https://leetcode.com/problems/sum-of-digits-in-base-k/
Difficulty : Easy
Tags : Bit Manipulation, Math
*/

class Solution {
public:
    int sumBase(int n, int k) {
        int ans = 0;
        while(n>0){
            ans += n%k;
            n = n/k;
        }
        return ans;
    }
};