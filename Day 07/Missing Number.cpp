/*
Author : Shreeraksha R Aithal
Problem name : 
Problem link : httpsleetcode.comproblemsmissing-number
Difficulty : Easy
Tags : Array, Math
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long n = nums.size();
        n = (n*(n+1))/2;
        for(auto m : nums)  n-=m;
        return n;
    }
};