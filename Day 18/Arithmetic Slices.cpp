/*
Author : Shreeraksha R Aithal
Problem name : Arithmetic Slices
Problem link : https://leetcode.com/problems/arithmetic-slices/
Difficulty : Medium
Tags : Dynamic Programming, Math
*/

class Solution {
private:
    int calc(int m){
        if(m<3)     return 0;
        return ((m-1)*(m-2))/2;
    }
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int i,j,n = A.size(),m = 0;
        for(i=0;i<n;){
            for(j=i+2;j<n && A[i]-A[i+1] == A[j-1]-A[j];j++)    ;
            m += calc(j-i);
            i = j-1;
        }
        return m;
    }
};