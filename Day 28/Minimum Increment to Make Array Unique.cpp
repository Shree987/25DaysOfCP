/*
Author : Shreeraksha R Aithal
Problem name : Minimum Increment to Make Array Unique
Problem link : https://leetcode.com/problems/minimum-increment-to-make-array-unique/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        sort(A.begin(), A.end());
        int count = 0;
        for(int i=1; i<A.size(); i++){
            count += max(0, A[i-1]+1 - A[i]);
            A[i] = max(A[i], A[i-1]+1);
        }
        return count;
    }
};