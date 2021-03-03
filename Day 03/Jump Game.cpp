/*
Author : Shreeraksha R Aithal
Problem name : Jump Game
Problem link : https://leetcode.com/problems/jump-game/
Difficulty : Medium
Tags : Array, Greedy
*/

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i, j, k, n = nums.size();
        vector<bool> ans(n, false);
        ans[n-1] = true;
        for(i = n-2; i >= 0; i--){
            j = i+1;
            k = i + nums[i];
            while(!ans[i] && j<=k){
                ans[i] = ans[j] | ans[k];
                j++;
                k--;
            }
        }
        return ans[0];
    }
};