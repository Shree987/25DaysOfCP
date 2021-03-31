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
        vector<vector<int> > matrix(n, vector<int>(n));
        int i, j, k = 1, a;
        for(a = 0; k<=n*n; a++){
            if(a == n/2){
                matrix[a][a] = k;
                break;
            }
            for(j=a; j<n-a; j++){
                matrix[a][j] = k++;                
            }
            for(i=a+1; i<n-a; i++){
                matrix[i][n-a-1] = k++;
            }
            for(j=n-a-2; j>=a; j--){
                matrix[n-a-1][j] = k++;                
            }
            for(i=n-a-2; i>a; i--){
                matrix[i][a] = k++;
            }
        }
        return matrix;
    }
};