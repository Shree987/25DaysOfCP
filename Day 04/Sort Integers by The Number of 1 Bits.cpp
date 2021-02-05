/*
Author : Shreeraksha R Aithal
Problem name : Sort Integers by The Number of 1 Bits
Problem link : https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
Difficulty : Easy
Tags : Bit Manipulation, Sort
*/

class Solution {
    int NoOf1Bits(int num){
        int cnt = 0;
        while(num>0){
            if(num%2 == 1)      cnt++;
            num/=2;
        }
        return cnt;
    }
public:
    vector<int> sortByBits(vector<int>& arr) {
        int i,n = arr.size();
        vector<pair<int,int>> a(n);
        for(i=0;i<n;i++){
            a[i] = make_pair(NoOf1Bits(arr[i]), arr[i]);
        }
        sort(a.begin(), a.end());
        for(i=0;i<n;i++){
            arr[i] = a[i].second;
        }
        return arr;
    }
};