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
        int i,j,m,n=matrix.size(),k = 0;
        while(k<n/2){
            vector<int> v(n-k-k,0);
            if(n-k-k==1)    break;
            m=0;
            for(i=k;i<n-k;i++){
                v[m++] = matrix[k][i];
            }
            for(j=k;j<n-k;j++){
                matrix[k][n-j-1] = matrix[j][k];
            }
            for(j=k;j<n-k;j++){
                matrix[j][k] = matrix[n-k-1][j];
            }
            for(j=k;j<n-k;j++){
                matrix[n-k-1][j] = matrix[n-j-1][n-k-1];
            }
            m=0;
            for(i=k;i<n-k;i++){
                matrix[i][n-k-1] = v[m++];
            }
            k++;
        }
    }
};