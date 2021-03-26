/*
Author : Shreeraksha R Aithal
Problem name : Koko Eating Bananas
Problem link : https://leetcode.com/problems/koko-eating-bananas/
Difficulty : Medium
Tags : Binary Search
*/

class Solution {
private:
    int calcH(vector<int>& piles, int k){
        int H = 0;
        for(auto p : piles){
            H += (p + k - 1)/k;
        }
        return H;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = 1, mid, H;
        for(auto pile : piles)      right = max(right, pile);
        while(left < right){
            mid = left + (right-left)/2;
            H = calcH(piles, mid);
            if(H<=h){
                right = mid;
            }
            else{
                left = mid+1;
            }
        }
        return left;
    }
};