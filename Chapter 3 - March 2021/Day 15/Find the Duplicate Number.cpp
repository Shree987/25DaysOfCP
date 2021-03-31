/*
Author : Shreeraksha R Aithal
Problem name : Find the Difference
Problem link : https://leetcode.com/problems/find-the-duplicate-number/
Difficulty : Medium
Tags : Array, Binary Search, Two Pointers
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i, n = nums.size()-1;
        for(i = 0; i<n; i++){
            if(nums[i] != i+1){
                if(nums[i] == nums[nums[i]-1])      return nums[i];
                swap(nums[i], nums[nums[i]-1]);
                i--;
            }
        }
        return nums[n];
    }
};