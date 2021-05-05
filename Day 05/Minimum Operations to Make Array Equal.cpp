/*
Author : Shreeraksha R Aithal
Problem name : Minimum Operations to Make Array Equal
Problem link : https://leetcode.com/problems/minimum-operations-to-make-array-equal/
Difficulty : Medium
Tags : Math
*/

class Solution {
public:
    int minOperations(int n) {
        int cnt = 0, index = 1;
        while(index < n){
            cnt += n - index;
            index += 2;
        }
        return cnt;
    }
};
