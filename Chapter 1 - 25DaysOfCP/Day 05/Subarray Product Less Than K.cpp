/*
Author : Shreeraksha R Aithal
Problem name : Subarray Product Less Than K
Problem link : https://leetcode.com/problems/subarray-product-less-than-k/
Difficulty : Medium
Tags : Math, Two Pointers
*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int i=0,j=0,cnt= 0,n = nums.size();
        if(n==0)    return 0;
        long long mul = 1;
        for(i=0;i<n;i++){
            mul*=nums[i];
            while(j<=i && mul>=k){
                mul/=nums[j];
                j++;
            }
            if(j>i){
                continue;
            }
            else{
                cnt+=i-j+1;
            }
        }
        return cnt;        
    }
};