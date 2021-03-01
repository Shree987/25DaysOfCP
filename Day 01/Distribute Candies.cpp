/*
Author : Shreeraksha R Aithal
Problem name : Distribute Candies
Problem link : https://leetcode.com/problems/distribute-candies/
Difficulty : Easy
Tags : Hash Table
*/

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> st;
        for(auto candy : candyType){
            st.insert(candy);
        }
        return min(candyType.size()/2, st.size());
    }
};