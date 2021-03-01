/*
Author : Shreeraksha R Aithal
Problem name : Count Servers that Communicate
Problem link : https://leetcode.com/problems/count-servers-that-communicate/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        int cnt = 0,i,j,n = grid.size(), m = grid[0].size();
        vector<int> row(n,0), col(m,0);
        map<int,int> columns;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(grid[i][j] == 1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        for(i=0;i<n;i++){
            if(row[i]>1){
                cnt+=row[i];
            }
            else if(row[i] == 1){
                for(j=0;j<m;j++){
                    if(grid[i][j] == 1)     columns[j]++;
                }
            }
        }
        for(auto k : columns){
            if(col[k.first] > 1)  cnt+=k.second;
        }
        return cnt;
    }
};