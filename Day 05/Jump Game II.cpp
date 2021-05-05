/*
Author : Shreeraksha R Aithal
Problem name : Jump Game II
Problem link : https://leetcode.com/problems/jump-game-ii/
Difficulty : Medium
Tags : Array, Greedy
*/

class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() == 1)    return 0;
        int j, n = nums.size(), i;
        vector<int> ans(nums.size(), n*n);
        ans[n-1] = 0;
        for(i=n-2;i>=0;i--){
            for(j=1;j<=nums[i] && i+j<n;j++){
                ans[i] = min(ans[i], ans[i+j]+1);
            }
        }
        return ans[0];
    }
};