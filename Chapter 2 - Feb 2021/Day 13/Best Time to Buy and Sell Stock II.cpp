/*
Author : Shreeraksha R Aithal
Problem name : Best Time to Buy and Sell Stock II
Problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
Difficulty : Easy
Tags : Array, Greedy
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = prices[0], i, n = prices.size(), sum = 0;
        for(i=1;i<n;i++){
            if(prices[i] > low){
                sum += prices[i]-low;
                low = prices[i];
            }
            else{
                low = min(prices[i], low);
            }
        }
        return sum;
    }
};