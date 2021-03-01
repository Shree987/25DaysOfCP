/*
Author : Shreeraksha R Aithal
Problem name : The K Weakest Rows in a Matrix
Problem link : https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/
Difficulty : Easy
Tags : Array, Binary Search
*/

class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int i,j,m = mat.size(), n = mat[0].size();
        vector<pair<int,int>> vp(m);
        vector<int> ans(k);
        for(i=0; i<m; i++){
            for(j=0; j<n && mat[i][j] == 1;j++) ;
            vp[i] = {j, i};
        }
        sort(vp.begin(), vp.end());
        for(i=0;i<k;i++)    ans[i] = vp[i].second;
        return ans;
    }
};