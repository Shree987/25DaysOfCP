/*
Author : Shreeraksha R Aithal
Problem name : Palindrome Number
Problem link : http://leetcode.com/problems/palindrome-number/
Difficulty : Easy
Tags : Math
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)     return false;
        if(x == 0)  return true;
        long X = x, Y = 0;
        while(X>0){
            Y = Y*10 + X%10;
            X = X/10;
        }
        X = x;
        return Y==X;
    }
};