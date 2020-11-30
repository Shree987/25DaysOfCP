/*
Author : Shreeraksha R Aithal
Problem name : Sliding Window Maximum
Problem link : https://leetcode.com/problems/sliding-window-maximum/
Difficulty : Hard
Tags : Heap, Sliding Window
*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1)    return nums;
        priority_queue<pair<int,int>> pq;
        int i,j,n=nums.size();
        vector<int> ans;
        for(i=0;i<k; i++){
            pq.push(make_pair(nums[i], i));
        }
        ans.push_back(pq.top().first);
        for(i=k;i<n;i++){
            pq.push(make_pair(nums[i],i));
            while(pq.top().second<=i-k)  pq.pop();            
            ans.push_back(pq.top().first);
        }
        return ans;      
    }
};