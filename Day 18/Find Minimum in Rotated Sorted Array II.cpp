/*
Author : Shreeraksha R Aithal
Problem name : Find Minimum in Rotated Sorted Array II
Problem link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/
Difficulty : Hard
Tags : Array, Binary Search
*/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int mid, left = 0, right = nums.size()-1;
        if(nums[left] < nums[right])    return nums[left];
        while(left<right){
            if(nums[left] == nums[right])   right--;
            else{
                if(nums[left] < nums[right])    return nums[left];
                else    break;
            }
        }
        while(left < right){
            if(left + 1 == right)   return min(nums[left], nums[right]);
            mid = left + (right - left)/2;
            if(nums[0] <= nums[mid])  left = mid+1;
            else{
                right = mid;
            }
        }
        return nums[left];       
    }
};