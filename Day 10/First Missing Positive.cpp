/*
Author : Shreeraksha R Aithal
Problem name : First Missing Positive
Problem link : https://leetcode.com/problems/first-missing-positive/
Difficulty : Hard
Tags : Array
*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(), i, j, k;
        for(i=1;i<=n;i++){
            if(nums[i-1]<=0 || nums[i-1]>n || nums[i-1]==i)     continue;
            else{
                j = nums[i-1]-1;
                if(nums[j] == j+1)  continue;
                else{
                    swap(nums[i-1], nums[j]);
                    i--;
                }
            }
        }
        for(i=0;i<n;i++){
            if(nums[i]!=i+1)    return i+1;
        }
        return n+1;
    }
};