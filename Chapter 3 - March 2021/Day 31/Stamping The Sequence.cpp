/*
Author : Shreeraksha R Aithal
Problem name : Stamping The Sequence
Problem link : https://leetcode.com/problems/stamping-the-sequence/
Difficulty : Hard
Tags : Greedy, String
*/

class Solution {
    bool compare(string& stamp, int i, string& target){
        int j = stamp.size();
        bool b = false;
        for(int j = i; j<i+stamp.size(); j++){
            if(target[j] == '?')    continue;
            else if(stamp[j-i] != target[j])    return false;
            else    b = true;
        }
        if(b){
            for(j=i;j<stamp.size()+i; j++)  target[j] = '?';
        }
        return b;
    }
public:
    vector<int> movesToStamp(string stamp, string target) {
        int n = stamp.size(), m = target.size();
        string basic = string(m ,'?');
        vector<int> ans;
        while(target != basic){
            int k = 0;
            for(int i=0;i<=m-n;i++){
                if(compare(stamp, i, target)){
                    k++;
                    ans.push_back(i);
                    i += n-1;
                }
            }
            if(k == 0)  break;
        }
        if(target != basic){
            ans.clear();
        }
        else{
            reverse(ans.begin(), ans.end());
        }
        return ans;
    }
};