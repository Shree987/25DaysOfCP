/*
Author : Shreeraksha R Aithal
Problem name : Minimum Moves to Equal Array Elements
Problem link : https://leetcode.com/problems/minimum-moves-to-equal-array-elements/
Difficulty : Easy
Tags : Math
*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        long tot_sum = 0, Min = INT_MAX, n = nums.size();
        if(n<=1)    return 0;
        for(auto k : nums){
            tot_sum += k;
            if(k<Min)   Min = k;
        }
        return tot_sum - n*Min;
    }
};