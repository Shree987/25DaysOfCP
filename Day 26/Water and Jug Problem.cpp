/*
Author : Shreeraksha R Aithal
Problem name : Water and Jug Problem
Problem link : https://leetcode.com/problems/water-and-jug-problem/
Difficulty : Medium
Tags : Math
*/

class Solution {
public:
    bool canMeasureWater(int x, int y, int z) {
        if(z == 0)  return true;
        if(x == 0)  return y == z;
        if(y == 0)  return x == z;
        if(x+y < z) return false;
        return z%(__gcd(x,y)) == 0;
    }
};