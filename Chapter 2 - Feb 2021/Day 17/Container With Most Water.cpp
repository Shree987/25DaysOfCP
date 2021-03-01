/*
Author : Shreeraksha R Aithal
Problem name : Container With Most Water
Problem link : https://leetcode.com/problems/container-with-most-water/
Difficulty : Medium
Tags : Array, Two Pointers
*/

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0, i = 0, j =  height.size()-1;
        while(i<j){
            ans = max(ans, min(height[i],height[j])*(j-i));
            if(height[i] >= height[j])  j--;
            else    i++;
        }
        return ans;
    }
};