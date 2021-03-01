/*
Author : Shreeraksha R Aithal
Problem name : Unique Paths II
Problem link : https://leetcode.com/problems/unique-paths-ii/
Difficulty : Medium
Tags : Array, Dynamic Programming
*/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i, j, m = obstacleGrid.size(), n = obstacleGrid[0].size();
        if(obstacleGrid[0][0] == 1 || obstacleGrid[m-1][n-1] == 1)  return 0;
        int dp[m][n];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1 - obstacleGrid[0][0];
        for(i=1;i<m || i<n;i++){
            if(i<m)     dp[i][0] = (1 - obstacleGrid[i][0])*dp[i-1][0];
            if(i<n)     dp[0][i] = (1 - obstacleGrid[0][i])*dp[0][i-1];
        }
        for(i=1;i<m;i++){
            for(j=1;j<n;j++){
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])*(1 - obstacleGrid[i][j]);
            }
        }
        return dp[m-1][n-1];
    }
};