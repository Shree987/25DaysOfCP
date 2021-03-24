/*
Author : Shreeraksha R Aithal
Problem name : https://leetcode.com/problems/advantage-shuffle/
Problem link : Advantage Shuffle
Difficulty : Medium
Tags : Array, Greedy
*/

class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
        int i, j, k, n = A.size();
        vector<pair<int, int>> vp(n);
        for(i=0;i<n;i++)    vp[i] = {B[i], i};
        sort(A.begin(), A.end());
        sort(vp.begin(), vp.end());
        j = 0;
        k = n-1;
        for(i=0;i<n;i++){
            if(A[i] > vp[j].first){
                B[vp[j].second] = A[i];
                j++;
            }
            else{                
                B[vp[k].second] = A[i];
                k--;
            }
        }
        return B;
    }
};