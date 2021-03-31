/*
Author : Shreeraksha R Aithal
Problem name : Minimum Size Subarray Sum
Problem link : https://leetcode.com/problems/minimum-size-subarray-sum/
Difficulty : Medium
Tags : Array, Two Pointers, Binary Search
*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        if(nums[0] >= target)   return 1;
        int n = nums.size(), left = 0, right = 0, sum = nums[0], ans;
        ans = n+n;
        while(left < n){
            if(right < n-1 && (left == right || sum <= target)){
                right++;
                sum += nums[right];
            }
            else{
                sum -= nums[left];
                left++;
            }
            if(target <= sum)   ans = min(ans, right-left+1);
        }
        if(ans == n+n)  ans = 0;
        return ans;
    }
};