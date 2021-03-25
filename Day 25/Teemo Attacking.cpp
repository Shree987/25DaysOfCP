/*
Author : Shreeraksha R Aithal
Problem name : Teemo Attacking
Problem link : https://leetcode.com/problems/teemo-attacking/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    long findPoisonedDuration(vector<int>& timeSeries, int duration) {
        long res = 0, i = 1, n = timeSeries.size();
        if(n == 0 || duration == 0)  return 0;
        for(i=1;i<n;i++){
            if(timeSeries[i]>=timeSeries[i-1]+duration){
                res += duration;
            }
            else{
                res += timeSeries[i] - timeSeries[i-1];
            }            
        }
        return res + duration;
    }
};