/*
Author : Shreeraksha R Aithal
Problem name : House Robber
Problem link : https://leetcode.com/problems/house-robber/
Difficulty : Medium
Tags : Dynamic Programming
*/

class Solution {
public:
    int rob(vector<int>& nums) {
        int i, n = nums.size();
        if(n == 0)  return 0;
        if(n == 1)  return nums[0];
        if(n >= 3)  nums[n-3] += nums[n-1];
        for(i = n-4;i>=0;i--){
            nums[i] += max(nums[i+3], nums[i+2]);
        }
        return max(nums[0], nums[1]);
    }
};