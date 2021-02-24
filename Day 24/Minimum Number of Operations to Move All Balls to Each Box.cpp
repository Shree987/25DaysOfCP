/*
Author : Shreeraksha R Aithal
Problem name : Minimum Number of Operations to Move All Balls to Each Box
Problem link : https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
Difficulty : Medium
Tags : Array, Greedy
*/

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int i, j, n = boxes.size();
        vector<int> ans(n, 0);
        for(i=0;i<n;i++){
            j = 1;
            while(i-j>=0 || i+j<n){
                if(i-j>=0 && boxes[i-j]=='1')     ans[i]+=j;
                if(i+j<n && boxes[i+j]=='1')     ans[i]+=j;
                j++;
            }
        }
        return ans;
    }
};