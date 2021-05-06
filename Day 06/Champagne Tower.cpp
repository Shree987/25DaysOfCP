/*
Author : Shreeraksha R Aithal
Problem name : Champagne Tower
Problem link : https://leetcode.com/problems/champagne-tower/
Difficulty : Medium
Tags : Dynamic Programming
*/

class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        map<int, double> mp;
        mp[0] = poured;
        int row = 0, glass = 0;
        double k;
        while(row < query_row){
            if(row < glass){
                row++;
                glass = 0;
            }
            if(mp[200*row + glass] > 1.0){
                k = (mp[200*row + glass] - 1.0)/2;
                mp[200*row + glass + 200] += k;
                mp[200*row + glass + 201] += k;                
            }
            glass++;
        }
        return min(mp[200*query_row + query_glass], 1.0);
    }
};