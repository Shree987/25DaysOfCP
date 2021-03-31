/*
Author : Shreeraksha R Aithal
Problem name : Wiggle Subsequence
Problem link : https://leetcode.com/problems/wiggle-subsequence/
Difficulty : Medium
Tags : Dynamic Programming, Greedy
*/

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int i, j, k, n = nums.size(), answer = 1, sum1, sum2;
        int dp[n][2];
        memset(dp, 0, sizeof(dp));
        dp[n-1][0] = dp[n-1][1] = 1;
        for(i = n-2; i>=0; i--){
            sum1 = sum2 = 0;
            for(j = i+1; j<n; j++){
                if(nums[i] > nums[j])   sum1 = max(sum1, dp[j][0]);
                else if(nums[i] < nums[j])   sum2 = max(sum2, dp[j][1]);
            }
            dp[i][0] = 1 + sum2;
            dp[i][1] = 1 + sum1;
            answer = max(answer, max(dp[i][0], dp[i][1]));
        }
        return answer;
    }
};