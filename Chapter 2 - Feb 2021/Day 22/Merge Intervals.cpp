/*
Author : Shreeraksha R Aithal
Problem name : Merge Intervals
Problem link : https://leetcode.com/problems/merge-intervals/
Difficulty : Medium
Tags : Array, Sort
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> answer;
        vector<int> v = intervals[0];
        answer.push_back(v);
        int i, n = intervals.size();
        for(i=1; i<n; i++){
            v = answer[answer.size()-1];
            if(intervals[i][0] <= answer[answer.size()-1][1]){
                answer[answer.size()-1][0] = min(intervals[i][0], v[0]);
                answer[answer.size()-1][1] = max(intervals[i][1], v[1]);
            }
            else{
                answer.push_back(intervals[i]);
            }
            v = answer[answer.size()-1];
        }
        return answer;
    }
};