/*
Author : Shreeraksha R Aithal
Problem name : 3Sum With Multiplicity
Problem link : https://leetcode.com/problems/3sum-with-multiplicity/
Difficulty : Medium
Tags : Two Pointers
*/

#define mod 1000000007
class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long long answer = 0;
        vector<pair<long, long>> vp;
        map<long, long> mp;
        for(auto k : arr){
            mp[k]++;
        }
        for(auto p : mp){
            vp.push_back(p);
        }
        long long i, j, k, n = vp.size();
        if(target%3 == 0){
            k = mp[target/3];
            answer = (answer%mod + ((k*(k-1)*(k-2))/6)%mod)%mod;
        }
        for(i=0; i<n; i++){
            k = target - 2*vp[i].first;
            if(k != vp[i].first){
                k = mp[target - 2*vp[i].first]; 
                answer = (answer%mod + ((k*(vp[i].second-1)*vp[i].second)/2)%mod)%mod;
            }
            for(j=i+1;j<n;j++){
                k = target - vp[i].first - vp[j].first;
                if(k > vp[j].first){
                    answer = (answer%mod + (vp[i].second*vp[j].second*mp[k])%mod)%mod;
                }
            }
        }
        return answer;
    }
};