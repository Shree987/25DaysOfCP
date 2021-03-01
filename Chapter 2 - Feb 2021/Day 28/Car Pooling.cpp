/*
Author : Shreeraksha R Aithal
Problem name : Car Pooling
Problem link : https://leetcode.com/problems/car-pooling/
Difficulty : Medium
Tags : Greedy
*/

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> route(1002,0);
        for(auto p : trips){
            route[p[1]] += p[0];
            route[p[2]] -= p[0];
        }
        for(int i=1;i<1002;i++){
            route[i] += route[i-1];
            if(route[i] > capacity){
                return false;
            }
        }
        return true;
    }
};