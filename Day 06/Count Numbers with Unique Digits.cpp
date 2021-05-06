/*
Author : Shreeraksha R Aithal
Problem name : Count Numbers with Unique Digits
Problem link : https://leetcode.com/problems/count-numbers-with-unique-digits/
Difficulty : Medium
Tags : Backtracking, Dynamic Programming, Math
*/

class Solution {
    int func(int n){
        int ans = 9,num=9;
        while(n>1){
            ans*=num;
            num--;
            n--;
        }     
        return ans;
    }
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0)      return 1;
        int ans = 1;
        while(n>0){
            ans += func(n);
            n--;
        }
        return ans;
    }
};