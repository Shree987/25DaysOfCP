/*
Author : Shreeraksha R Aithal
Problem name : Divide Two Integers
Problem link : https://leetcode.com/problems/divide-two-integers/
Difficulty : Medium
Tags : Binary Search, Math
*/

class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == 0)   return 0;
        if(divisor == 1)   return dividend;
        if(divisor == -1 && dividend == INT_MIN)    return INT_MAX;
        if(divisor == -1)   return -dividend;
        if(divisor == dividend)   return 1;
        bool sign = (dividend < 0) ^ (divisor < 0);
        double a = fabs(dividend), b = fabs(divisor);
        return (sign ? -1 : 1)*exp(log(a)-log(b));
    }
};