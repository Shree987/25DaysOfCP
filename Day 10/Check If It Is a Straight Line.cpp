/*
Author : Shreeraksha R Aithal
Problem name : Check If It Is a Straight Line
Problem link : http://leetcode.com/problems/check-if-it-is-a-straight-line/
Difficulty : Easy
Tags : Array, Geometry, Math
*/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int i, j, n = coordinates.size(), a, b, k, x, y;
        a = coordinates[0][0] - coordinates[1][0];
        b = coordinates[0][1] - coordinates[1][1];
        k = __gcd(a, b);
        a = a/k;
        b = b/k;
        for(i = 2; i<n; i++){
            x = coordinates[0][0] - coordinates[i][0];
            y = coordinates[0][1] - coordinates[i][1];
            k = __gcd(x, y);
            x = x/k;
            y = y/k;     
            if(x!=a || y!=b)     return false;
        }
        return true;
    }
};