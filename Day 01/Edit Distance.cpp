/*
Author : Shreeraksha R Aithal
Problem name : Edit Distance
Problem link : https://leetcode.com/problems/edit-distance/
Difficulty : Hard
Tags : Dynamic Programming
*/

class Solution {
public:
    int minDistance(string str1, string str2) {
        int i, j, n = str1.size(), m = str2.size();
        int dist[n+1][m+1];
        for(i = 0; i <= n; ++i){
            for(j = 0; j <= m; ++j){
                if(i == 0){
                    dist[i][j] = j;
                }
                else if(j == 0){
                    dist[i][j] = i;
                }
                else{
                    if(str1[i-1] == str2[j-1])      dist[i][j] = dist[i-1][j-1];
                    else dist[i][j] = 1 + min(dist[i-1][j-1], min(dist[i][j-1], dist[i-1][j]));
                }
            }
        }
        return dist[n][m];
    }
};