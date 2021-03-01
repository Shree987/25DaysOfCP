/*
Author : Shreeraksha R Aithal
Problem name : Unique Paths
Problem link : https://leetcode.com/problems/unique-paths/
Difficulty : Medium
Tags : Array, Dynamic Programming
*/

class Solution {
public:
    int uniquePaths(int m, int n) {
        int i, j, dp[m][n];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        for(i=1;i<m || i<n;i++){
            if(i<m)     dp[i][0] = 1;
            if(i<n)     dp[0][i] = 1;
        }
        for(i=1;i<m;i++){
            for(j=1;j<n;j++){
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
    }
};