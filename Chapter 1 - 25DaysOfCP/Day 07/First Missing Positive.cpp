/*
Author : Shreeraksha R Aithal
Problem name : First Missing Positive
Problem link : https://leetcode.com/problems/first-missing-positive/
Difficulty : Hard
Tags : Array
*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i,m,j,n = nums.size();
        if(n==0)    return 1;
        bool b = false;
        for(i=0;i<n;i++){
            if(nums[i] == n){
                nums[i] = -1;
                b = true;
            }
            else if(nums[i]>=n || nums[i]<=-2)   nums[i] = -1;
            else{
                if(nums[i]==i || nums[i]==-1)  continue;
                else{
                    j = nums[i];
                    if(nums[j] == j){
                        nums[i] = -1;
                        continue;
                    }
                    else{
                        swap(nums[i],nums[j]);
                        i--;
                    }
                }
            }
        }
        for(i=1;i<n;i++){
            if(nums[i] != i)    return i;
        }
        return b ? n+1 : n;
    }
};