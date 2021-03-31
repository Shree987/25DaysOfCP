/*
Author : Shreeraksha R Aithal
Problem number : 1376
Problem name : Time Needed to Inform All Employees
Problem link : https://leetcode.com/problems/time-needed-to-inform-all-employees/
Difficulty : Medium
Tags : Depth-first Search
*/

class Solution {
    void dp(vector<int>& manager, vector<int>& informTime, int index, vector<int>&Time){
        if(Time[index] > -1)     return ;
        int i = manager[index];
        if(Time[i] == -1)    dp(manager, informTime, i, Time);
        Time[index] = informTime[i] + Time[i];
    }
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<int> Time(n, -1);
        Time[headID] = 0;
        int ans = 0;
        for(int i=0; i<n; i++){
            if(Time[i] == -1){
                dp(manager, informTime, i, Time);
            }
            ans = max(ans, Time[i]);
        }
        return ans;
    }
};