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
        int k, i, j, n = prices.size(), profit = 0;
        if(n < 2)   return 0;
        k = prices[0];
        for(i=1;i<n;i++){
            if(prices[i]<k)     k = prices[i];
            else if(prices[i]>k){
                j = i+1;
                while(j<n && prices[j]>=prices[j-1])  j++;
                i = j-1;
                profit+=prices[i]-k;
                if(i<n-1){
                    i++;
                    k=prices[i];
                }
            }
        }
        return profit;
    }
};