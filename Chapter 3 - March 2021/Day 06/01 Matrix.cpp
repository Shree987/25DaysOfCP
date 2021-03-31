/*
Author : Shreeraksha R Aithal
Problem name : 01 Matrix
Problem link : https://leetcode.com/problems/01-matrix/
Difficulty : Medium
Tags : Breadth-first Search, Depth-first Search
*/

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int i, j, k, n = matrix.size(), m = matrix[0].size();
        queue<pair<int,int>> q;
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    q.push({i, j});
                }
                else{
                    matrix[i][j] = -1;
                }
            }
        }
        while(!q.empty()){
            i = q.front().first;
            j = q.front().second;
            q.pop();
            k = matrix[i][j];
            if(i>0 && matrix[i-1][j] == -1){
                matrix[i-1][j] = k+1;
                q.push({i-1,j});
            }            
            if(j>0 && matrix[i][j-1] == -1){
                matrix[i][j-1] = k+1;
                q.push({i,j-1});
            }
            if(i<n-1 && matrix[i+1][j] == -1){
                matrix[i+1][j] = k+1;
                q.push({i+1,j});
            }
            if(j<m-1 && matrix[i][j+1] == -1){
                matrix[i][j+1] = k+1;
                q.push({i,j+1});
            }
        }    
        return matrix;
    }
};