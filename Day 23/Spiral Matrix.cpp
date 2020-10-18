/*
Author : Shreeraksha R Aithal
Problem name : Spiral Matrix
Problem link : https://leetcode.com/problems/spiral-matrix-ii/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int i,j,k,m,n,x,y,N,z1,z2;
        n = matrix.size();
        if(n==0)    return ans;
        m = matrix[0].size();
        if(m==1 && n==1)    return matrix[0];
        N = m*n;
        ans.resize(N);
        y = 0;
        for(i=0;y<N;i++){
            z1 = n-i-1;
            z2 = m-i-1;
            if(z1<i || z2<i)    break;
            if(z1 == i && z2 == i){
                ans[y++] = matrix[i][i];
                break;
            }
            else if(z1 == i){
                for(x=i;x<=z2 && y<N;x++){
                    ans[y++] = matrix[i][x];
                }
                break;
            }
            else if(z2 == i){
                for(x=i;x<=z1 && y<N;x++){
                    ans[y++] = matrix[x][i];
                }
                break;
            }
            else{
                for(x=i;x<z2 && y<N;x++){
                    ans[y++] = matrix[i][x];
                }
                if(y>=N)    break;
                for(x=i;x<z1 && y<N;x++){
                    ans[y++] = matrix[x][z2];
                }
                if(y>=N)    break;
                for(x=z2;x>i && y<N;x--){
                    ans[y++] = matrix[z1][x];
                }
                if(y>=N)    break;
                for(x=z1;x>i && y<N;x--){
                    ans[y++] = matrix[x][i];
                }
            }
        }
        return ans;
    }
};