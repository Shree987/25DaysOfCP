/*
Author : Shreeraksha R Aithal
Problem name : Rotate Image
Problem link : https://leetcode.com/problems/rotate-image/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int x, i, j, n = matrix.size(), m;
        for(x=0;x<n-x;x++){
            for(j=x;j<n-x-1;j++){
                swap(matrix[x][j], matrix[j][n-x-1]);
                swap(matrix[x][j], matrix[n-x-1][n-j-1]);
                swap(matrix[x][j], matrix[n-j-1][x]);
            }
        }
    }
};