/*
Author : Shreeraksha R Aithal
Problem name : Group the People Given the Group Size They Belong To
Problem link : https://leetcode.com/problems/group-the-people-given-the-group-size-they-belong-to/
Difficulty : Medium
Tags : Greedy
*/

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, vector<int>> Map;
        vector<vector<int> > ans;
        for(int i=0; i<groupSizes.size(); i++){
            Map[groupSizes[i]].push_back(i);
            if(Map[groupSizes[i]].size() == groupSizes[i]){
                ans.push_back(Map[groupSizes[i]]);
                Map[groupSizes[i]].clear();
            }
        }
        return ans;
    }
};