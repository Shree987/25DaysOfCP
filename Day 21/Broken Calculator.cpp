/*
Author : Shreeraksha R Aithal
Problem name : Broken Calculator
Problem link : https://leetcode.com/problems/broken-calculator/
Difficulty : Medium
Tags : Greedy, Math
*/

class Solution {
public:
    int brokenCalc(int X, int Y) {
        long n = Y;
        Y = 0;
        while(n>X){
            if(n%2 == 0)    n /= 2;
            else    n++;
            Y++;
        }
        Y += X-n;
        return Y;
    }    
};