/*
Author : Shreeraksha R Aithal
Problem name : Count Sorted Vowel Strings
Problem link : https://leetcode.com/problems/count-sorted-vowel-strings/
Difficulty : Medium
Tags : Dynamic Programming
*/

class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n][5];
        int i,j,k;
        for(i=0;i<n;i++){
            for(j=0;j<5;j++){
                if(i == 0)  dp[i][j] = 1;
                else if(j == 0){
                    dp[i][j] = 1;
                }
                else{
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
            }
        }
        return dp[n-1][0] + dp[n-1][1] + dp[n-1][2] + dp[n-1][3] + dp[n-1][4];
    }
};