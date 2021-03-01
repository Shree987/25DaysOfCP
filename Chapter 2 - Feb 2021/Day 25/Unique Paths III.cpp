/*
Author : Shreeraksha R Aithal
Problem name : Unique Paths III
Problem link : https://leetcode.com/problems/unique-paths-iii/
Difficulty : Hard
Tags : Backtracking, Depth-first Search
*/

class Solution {
private:
    int ans, k;
    void backtrack(vector<vector<int>>& grid, int i, int j, int sum){
        if(grid[i][j] == 2){
            if(sum == k)    ans++;
            return ;
        }
        else if(grid[i][j] == 0){
            grid[i][j] = 3;
            sum++;
            if(i-1>=0 && (grid[i-1][j] == 0 || grid[i-1][j] == 2))       backtrack(grid,i-1,j,sum);
            if(i+1<grid.size() && (grid[i+1][j] == 0 || grid[i+1][j] == 2))       backtrack(grid,i+1,j,sum);
            if(j-1>=0 && (grid[i][j-1] == 0 || grid[i][j-1] == 2))       backtrack(grid,i,j-1,sum);
            if(j+1<grid[0].size() && (grid[i][j+1] == 0 || grid[i][j+1] == 2))       backtrack(grid,i,j+1,sum);
            sum--;
            grid[i][j] = 0;
        }
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        ans = k = 0;
        int i, j, n = grid.size(), m = grid[0].size(), x, y;
        for(i = 0; i < n; i++){
            for(j = 0; j < m ; j++){
                if(grid[i][j] == 1){
                    x = i;
                    y = j;
                }
                else if(grid[i][j] == 0){
                    k++;
                }
            }
        }
        i = x;
        j = y;
        if(i-1>=0 && (grid[i-1][j] == 0 || grid[i-1][j] == 2))       backtrack(grid,i-1,j,0);
        if(i+1<grid.size() && (grid[i+1][j] == 0 || grid[i+1][j] == 2))       backtrack(grid,i+1,j,0);
        if(j-1>=0 && (grid[i][j-1] == 0 || grid[i][j-1] == 2))       backtrack(grid,i,j-1,0);
        if(j+1<grid[0].size() && (grid[i][j+1] == 0 || grid[i][j+1] == 2))       backtrack(grid,i,j+1,0);
        return ans;
    }
};