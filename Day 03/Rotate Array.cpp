/*
Author : Shreeraksha R Aithal
Problem name : Rotate Array
Problem link : https://leetcode.com/problems/rotate-array/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size(), m;
        k = k%n;
        if(k == 0)  return ;
        for(int i, j=0;j<__gcd(n,k);j++){
            m = nums[j];
            i = (j+k)%n;
            while(i!=j){
                swap(m, nums[i]);
                i = (i+k)%n;
            }
            nums[j] = m;
        }
    }
};