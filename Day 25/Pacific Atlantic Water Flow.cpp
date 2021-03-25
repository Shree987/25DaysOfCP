/*
Author : Shreeraksha R Aithal
Problem number : 417
Problem name : Pacific Atlantic Water Flow
Problem link : https://leetcode.com/problems/pacific-atlantic-water-flow/
Difficulty : Medium
Tags : Breadth-first Search, Depth-first Search
*/

class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) { 
        vector<vector<int>> answer;       
        if(matrix.size() == 0)  return answer;
        queue<pair<int,int>> q;
        int i, j, n = matrix.size(), m = matrix[0].size();
        int dp[n][m];
        memset(dp, 0, sizeof(dp));
        for(i=0;i<n;i++){
            dp[i][0] = 1;
            q.push({i,0});
        }
        for(j=1;j<m;j++){
            dp[0][j] = 1;
            q.push({0,j});
        }
        while(!q.empty()){
            i = q.front().first;
            j = q.front().second;
            q.pop();
            if(i>0 && dp[i-1][j] == 0 && matrix[i-1][j]>=matrix[i][j]){
                dp[i-1][j] = 1;
                q.push({i-1,j});
            }
            if(j>0 && dp[i][j-1] == 0 && matrix[i][j-1]>=matrix[i][j]){
                dp[i][j-1] = 1;
                q.push({i,j-1});
            }
            if(i<n-1 && dp[i+1][j] == 0 && matrix[i+1][j]>=matrix[i][j]){
                dp[i+1][j] = 1;
                q.push({i+1,j});
            }
            if(j<m-1 && dp[i][j+1] == 0 && matrix[i][j+1]>=matrix[i][j]){
                dp[i][j+1] = 1;
                q.push({i,j+1});
            }
        }  
        for(i=0;i<n;i++){
            dp[i][m-1] += 2;
            q.push({i,m-1});
        }
        for(j=0;j<m-1;j++){
            dp[n-1][j] += 2;
            q.push({n-1,j});
        }
        while(!q.empty()){
            i = q.front().first;
            j = q.front().second;
            q.pop();                        
            if(dp[i][j] == 3){
                answer.push_back({i,j});
            }            
            if(i>0 && dp[i-1][j] < 2 && matrix[i-1][j]>=matrix[i][j]){
                dp[i-1][j] += 2;
                q.push({i-1,j});
            }
            if(j>0 && dp[i][j-1] < 2 && matrix[i][j-1]>=matrix[i][j]){
                dp[i][j-1] += 2;
                q.push({i,j-1});
            }
            if(i<n-1 && dp[i+1][j] < 2 && matrix[i+1][j]>=matrix[i][j]){
                dp[i+1][j] += 2;
                q.push({i+1,j});
            }
            if(j<m-1 && dp[i][j+1] < 2 && matrix[i][j+1]>=matrix[i][j]){
                dp[i][j+1] += 2;
                q.push({i,j+1});
            }
        }
        return answer;        
    }
};