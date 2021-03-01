/*
Author : Shreeraksha R Aithal
Problem name : Maximum Width Ramp
Problem link : https://leetcode.com/problems/maximum-width-ramp/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    int maxWidthRamp(vector<int>& A) {
        int i,Max=0,Min,n = A.size();
        if(n==2){
            if(A[0]<=A[1])  return 1;
            return 0;
        }
        vector<pair<int,int>> vp(n);
        for(i=0;i<n;i++){
            vp[i] = make_pair(A[i],i);
        }
        sort(vp.begin(), vp.end());
        Min = vp[0].second;
        for(i=1;i<n;i++){
            if(vp[i].first>=A[Min])    Max = max(Max, vp[i].second-Min);
            Min = min(Min, vp[i].second);   
        }
        return Max;
    }
};