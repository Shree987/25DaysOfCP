/*
Author : Shreeraksha R Aithal
Problem name : Spiral Matrix II
Problem link : https://leetcode.com/problems/spiral-matrix-ii/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:    
    
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans;
        ans.resize(n);
        int i,x,z,m=1;
        for(i=0;i<n;i++)    ans[i].resize(n);
        for(i=0;i<(n/2);i++){
            z = n-i-1;
            for(x=i;x<=z;x++){
                ans[i][x] = (m++);
            }
            for(x=i+1;x<=z;x++){
                ans[x][z] = (m++);
            }
            for(x=z-1;x>=i;x--){
                ans[z][x] = (m++);
            }
            for(x=z-1;x>i;x--){
                ans[x][i] = (m++);
            }
        }
        if(n%2==1)  ans[n/2][n/2] = n*n;
        return ans;
    }
};