/*
Author : Shreeraksha R Aithal
Problem name : Shortest Unsorted Continuous Subarray
Problem link : https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr = nums;
        sort(arr.begin(), arr.end());
        int i=0, j = nums.size()-1;
        while(i<j && (arr[i] == nums[i] || arr[j] == nums[j])){
            if(arr[i] == nums[i])   i++;
            if(arr[j] == nums[j])   j--;
        }
        if(i == j)  return 0;
        return j-i+1;
    }
};