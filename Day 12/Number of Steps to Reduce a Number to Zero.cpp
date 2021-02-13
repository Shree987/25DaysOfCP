/*
Author : Shreeraksha R Aithal
Problem name : Number of Steps to Reduce a Number to Zero
Problem link : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
Difficulty : Easy
Tags : Bit Manipulation
*/

class Solution {
public:
    int numberOfSteps (int num) {
        if(num<=1)  return num;
        if(num%2 == 0)      return 1 + numberOfSteps(num/2);
        else    return 1+numberOfSteps(num-1);
    }
};