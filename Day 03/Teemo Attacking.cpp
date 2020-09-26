/*
Author : Shreeraksha R Aithal
Problem name : Teemo Attacking
Problem link : https://leetcode.com/problems/teemo-attacking/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int time = 0, i, start = 0, end = 0, n=timeSeries.size();
        if(n==0)    return 0;
        start = timeSeries[0];
        end = start + duration - 1;
        for(i=1;i<n;i++){
            if(end>=timeSeries[i]){
                end = max(end, timeSeries[i]+duration-1);
            }
            else{
                time += end - start+1;
                start = timeSeries[i];
                end = timeSeries[i]+duration-1;
            }
        }
        time += end - start + 1;
        return time;
    }
};