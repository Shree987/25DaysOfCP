/*
Author : Shreeraksha R Aithal
Problem name : Remove Duplicates from Sorted Array II
Problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/
Difficulty : Medium
Tags : Array, Two Pointers
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j,k = 0,n = nums.size();
        while(i<n){
            j = i+1;
            while(j<n && nums[j]==nums[i])  j++;
            if(j-i == 1){
                nums[k++] = nums[i++];
            }
            else{
                nums[k] = nums[k+1] = nums[i];
                k += 2;
                i = j;
            }
        }
        return k;
    }
};