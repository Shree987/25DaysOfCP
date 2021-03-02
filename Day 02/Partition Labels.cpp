/*
Author : Shreeraksha R Aithal
Problem name : Partition Labels
Problem link : https://leetcode.com/problems/partition-labels/
Difficulty : Medium
Tags : Greedy, Two Pointer
*/

class Solution {
public:
    vector<int> partitionLabels(string S) {
        int i, j, n = S.size(), k;
        vector<int> index(26, -1), ans;        
        for(i = 0; i < n; i++){
            index[S[i]-'a'] = i;
        }
        j = 0;
        k = 0;
        for(i = 0; i < n; i++){
            j = max(j, index[S[i]-'a']);
            if(i == j){
                ans.push_back(j-k+1);
                k = j = i+1;
            }
        }
        return ans;
    }
};