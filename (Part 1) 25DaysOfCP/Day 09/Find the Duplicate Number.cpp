/*
Author : Shreeraksha R Aithal
Problem name : Find the Duplicate Number
Problem link : https://leetcode.com/problems/find-the-duplicate-number/
Difficulty : Medium
Tags : Array, Two Pointers
*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i,j,n = nums.size()-1;
        for(i=0;i<n;i++){
            if(nums[i] == i+1)  continue;
            else{
                j = nums[i];
                if(nums[j-1] == j)  return nums[i];
                else{
                    swap(nums[i], nums[j-1]);
                    i--;
                }
            }
        }
        return nums[n];
    }
};