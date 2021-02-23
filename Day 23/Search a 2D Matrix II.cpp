/*
Author : Shreeraksha R Aithal
Problem name : Search a 2D Matrix II
Problem link : https://leetcode.com/problems/search-a-2d-matrix-ii/
Difficulty : Medium
Tags : Binary Search, Divide and Conquer
*/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0, j, n = matrix.size(), m = matrix[0].size();
        j = m-1;
        while(j>=0 && i<n){
            if(target == matrix[i][j])  return true;
            else if(target > matrix[i][j])  i++;
            else    j--;
        }
        return false;
    }
};