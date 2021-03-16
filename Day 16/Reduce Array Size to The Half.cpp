/*
Author : Shreeraksha R Aithal
Problem name : Reduce Array Size to The Half
Problem link : https://leetcode.com/problems/reduce-array-size-to-the-half/
Difficulty : Medium
Tags : Array, Greedy
*/

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int> pr;
        unordered_map<int,int> mp;
        int i, n = arr.size(), sum = arr.size()/2;
        for(auto k : arr){
            if(mp[k] == 0){
                mp[k] = pr.size()+1;
                pr.push_back(1);                
            }
            else{
                pr[mp[k]-1]++;
            }
        }
        sort(pr.rbegin(), pr.rend());
        for(i = 0; sum>0 && i<pr.size(); i++){
            sum -= pr[i];
        }
        return i;
    }
};