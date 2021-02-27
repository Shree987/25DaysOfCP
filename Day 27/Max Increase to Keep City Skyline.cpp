/*
Author : Shreeraksha R Aithal
Problem name : Max Increase to Keep City Skyline
Problem link : https://leetcode.com/problems/max-increase-to-keep-city-skyline/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int i, j, n = grid.size(), k, ans = 0;
        vector<int> row(n,0), col(n,0);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
        }        
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                k = min(row[i], col[j]);
                if(k > grid[i][j])      ans += k - grid[i][j];
            }
        }
        return ans;
    }
};