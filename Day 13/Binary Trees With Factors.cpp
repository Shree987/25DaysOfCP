/*
Author : Shreeraksha R Aithal
Problem name : Binary Trees With Factors
Problem link : https://leetcode.com/problems/binary-trees-with-factors/
Difficulty : Medium
Tags : Tree
*/

class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        long i, j, n = arr.size(), sum = 0, mod = 1000000007;
        sort(arr.begin(), arr.end());
        map<long,long> mp;
        for(i=0; i<n; i++){
            mp[arr[i]] = 1;
            for(j=0;j<i;j++){
                if(arr[i]%arr[j] == 0){
                    if(mp.find(arr[i]/arr[j]) != mp.end()){
                        mp[arr[i]] = (mp[arr[i]] + (mp[arr[i]/arr[j]] * mp[arr[j]])%mod )%mod;
                    }
                }
            }
            sum = (sum%mod + mp[arr[i]]%mod)%mod;
        }
        return sum;
    }
};