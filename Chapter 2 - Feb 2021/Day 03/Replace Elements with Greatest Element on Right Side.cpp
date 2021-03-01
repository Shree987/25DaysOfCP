/*
Author : Shreeraksha R Aithal
Problem name : Replace Elements with Greatest Element on Right Side
Problem link : https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/
Difficulty : Easy
Tags : Array
*/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i,j,n = arr.size();
        vector<int> ans(n,-1);
        for(i=n-2;i>=0;i--){
            ans[i] = max(arr[i+1], ans[i+1]);
        }
        return ans;
    }
};