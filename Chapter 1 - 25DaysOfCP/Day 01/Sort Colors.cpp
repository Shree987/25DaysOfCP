/*
Author : Shreeraksha R Aithal
Problem name : Sort Colors
Problem link : https://leetcode.com/problems/sort-colors/
Difficulty : Medium
Tags : Array
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,k,n = nums.size();
        i = 0;
        j = n-1;
        for(k=0; k<n && i<j;){
            if(nums[k]==0){
                if(k>i)  swap(nums[i++], nums[k]);
                else    k++;
            }
            else if(nums[k]==2){
                if(k<j) swap(nums[k], nums[j--]);
                else    k++;
            }
            else    k++;
        }
    }
};