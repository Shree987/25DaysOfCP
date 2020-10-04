/*
Author : Shreeraksha R Aithal
Problem name : Remove Covered Intervals
Problem link : https://leetcode.com/problems/remove-covered-intervals/
Difficulty : Medium
Tags : Greedy, Sorting
*/

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int i, j, n = intervals.size(), k;
        if(n<=1)    return n;
        k = n;
        sort(intervals.begin(), intervals.end(), [](const vector<int>& lhs, const vector<int>& rhs) {
		    if(lhs[0] != rhs[0])
		        return lhs[0] < rhs[0];
		    else
		        return lhs[1] > rhs[1];
		});
        for(i=0;i<n;i++){
            if(intervals[i][1] == -1)   continue;
            for(j=i+1;j<n;j++){
                if(intervals[j][1] == -1)    continue;
                if(intervals[i][1] < intervals[j][0])   break;
                if(intervals[i][0]<=intervals[j][0] && intervals[i][1] >= intervals[j][1]){
                    k--;
                    intervals[j][1] = -1;
                }
                
            }
        }
        return k;
    }
};