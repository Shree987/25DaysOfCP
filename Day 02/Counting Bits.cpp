/*
Author : Shreeraksha R Aithal
Problem name : Counting Bits
Problem link : https://leetcode.com/problems/counting-bits/
Difficulty : Medium
Tags : Bit Manipulation
*/

class Solution {
private:
    int calcBits(int num){
        int value = 0;
        while(num>0){
            if(num%2 == 1){
                value++;
            }
            num = num/2;
        }
        return value;
    }
public:
    vector<int> countBits(int num) {
        vector<int> v(num+1);
        if(num >= 0)    v[0] = 0;
        if(num >= 1)    v[1] = 1;
        if(num > 1){
            for(int j = 2; j<= num; j++){
                v[j] =calcBits(j);
            }
        }
        return v;
    }
};