/*
Author : Shreeraksha R Aithal
Problem name : K-diff Pairs in an Array
Problem link : https://leetcode.com/problems/k-diff-pairs-in-an-array/
Difficulty : Medium
Tags : Array, Two Pointers
*/

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        long long ans = 0;
        for(auto n : nums){
            mp[n]++;
        }
        for(auto m : mp){
            if(k==0 && m.second>1)   ans++;
            if(k>0 && mp.find(m.first+k) != mp.end())    ans++;
        }
        return ans;
    }
};