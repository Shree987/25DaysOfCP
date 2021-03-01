/*
Author : Shreeraksha R Aithal
Problem name : Shortest Path in Binary Matrix
Problem link : https://leetcode.com/problems/shortest-path-in-binary-matrix/
Difficulty : Medium
Tags : Breadth-first Search
*/

class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid[0].size(), i, j, k;
        if(grid[0][0] == 1 || grid[n-1][n-1] == 1)  return -1;        
        if(n == 1)  return 1;
        vector<int> v(n, -1);
        vector<vector<int>> matrix(n, v);
        matrix[0][0] = 1;
        queue<pair<int,int>> q;
        q.push({0,0});
        while(matrix[n-1][n-1]==-1 && !q.empty()){
            i = q.front().first;
            j = q.front().second;
            q.pop();
            if(i>0 &&  grid[i-1][j]==0 && matrix[i-1][j] == -1){
                matrix[i-1][j] = matrix[i][j]+1;
                q.push({i-1,j});
            }
            if(j>0 &&  grid[i][j-1]==0 && matrix[i][j-1] == -1){
                matrix[i][j-1] = matrix[i][j]+1;
                q.push({i,j-1});
            }
            if(i<n-1 &&  grid[i+1][j]==0 && matrix[i+1][j] == -1){
                matrix[i+1][j] = matrix[i][j]+1;
                q.push({i+1,j});
            }
            if(j<n-1 &&  grid[i][j+1]==0 && matrix[i][j+1] == -1){
                matrix[i][j+1] = matrix[i][j]+1;
                q.push({i,j+1});
            }
            if(i>0 && j>0 && grid[i-1][j-1]==0 && matrix[i-1][j-1] == -1){
                matrix[i-1][j-1] = matrix[i][j]+1;
                q.push({i-1,j-1});
            }
            if(j>0 && i<n-1 && grid[i+1][j-1]==0 && matrix[i+1][j-1] == -1){
                matrix[i+1][j-1] = matrix[i][j]+1;
                q.push({i+1,j-1});
            }
            if(i<n-1 && j<n-1 && grid[i+1][j+1]==0 && matrix[i+1][j+1] == -1){
                matrix[i+1][j+1] = matrix[i][j]+1;
                q.push({i+1,j+1});
            }
            if(j<n-1 && i>0 && grid[i-1][j+1]==0 && matrix[i-1][j+1] == -1){
                matrix[i-1][j+1] = matrix[i][j]+1;
                q.push({i-1,j+1});
            }            
        }       
        return matrix[n-1][n-1];
    }
};