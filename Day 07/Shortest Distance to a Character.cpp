/*
Author : Shreeraksha R Aithal
Problem name : Shortest Distance to a Character
Problem link : https://leetcode.com/problems/shortest-distance-to-a-character/
Difficulty : Easy
Tags : String
*/

class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int index, i, n = s.size();
        vector<int> ans(n, 3*n);
        index = -(3*n);
        for(i=0;i<n;i++){
            if(c == s[i])   index = i;
            ans[i] = min(ans[i], i-index); 
        }
        index = (3*n);
        for(i=n-1;i>=0;i--){
            if(c == s[i])   index = i;
            ans[i] = min(ans[i], index-i); 
        }
        return ans;
    }
};