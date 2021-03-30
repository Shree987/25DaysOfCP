/*
Author : Shreeraksha R Aithal
Problem name : Russian Doll Envelopes
Problem link : https://leetcode.com/problems/russian-doll-envelopes/
Difficulty : Hard
Tags : Binary Search, Dynamic Programming
*/

class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end());
        vector<int> dp(envelopes.size(), 1);
        int res = 1;
        for(int i = 1; i<envelopes.size(); i++){
            dp[i] = 1;
            for(int j = 0; j<i; j++){
                if(envelopes[i][0] > envelopes[j][0] && envelopes[i][1] > envelopes[j][1]){
                    dp[i] = max(dp[i], dp[j]+1);
                }
            }
            res = max(dp[i], res);
        }
        return res;
    }
};