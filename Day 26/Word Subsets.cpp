/*
Author : Shreeraksha R Aithal
Problem number : 916
Problem name : Word Subsets
Problem link : https://leetcode.com/problems/word-subsets/
Difficulty : Medium
Tags : String
*/

class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        vector<string> ans;
        bool found = false;
        vector<int> BMax(26,0);
        for(auto b : B){
            vector<int> v(26,0);
            for(auto ch : b){
                v[ch-'a']++;
            }
            for(int i=0; i<26; i++){
                BMax[i] = max(BMax[i], v[i]);
            }
        }
        for(auto a : A){
            vector<int> v(26,0);
            for(auto ch : a){
                v[ch-'a']++;
            }
            int i;
            for(i=0; i<26; i++){
                if(v[i]<BMax[i])    break;
            }
            if(i == 26)  ans.push_back(a);
        }
        return ans;
    }
};