/*
Author : Shreeraksha R Aithal
Problem name : Delete Operation for Two Strings
Problem link : https://leetcode.com/problems/delete-operation-for-two-strings/
Difficulty : Medium
Tags : String
*/

class Solution {
public:
    int minDistance(string word1, string word2) {
        int i, j, n = word1.size(), m = word2.size();
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));
        for(i=0;i<=m || i<=n; i++){
            if(i<=n)     dp[i][0] = 0;
            if(i<=m)     dp[0][i] = 0;
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=m;j++){
                if(word1[i-1] == word2[j-1])    dp[i][j] = 1 + dp[i-1][j-1];
                else    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return n+m-(2*dp[n][m]);
    }
};