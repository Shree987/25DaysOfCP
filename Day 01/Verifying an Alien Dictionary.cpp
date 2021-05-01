/*
Author : Shreeraksha R Aithal
Problem name : Verifying an Alien Dictionary
Problem link : https://leetcode.com/problems/verifying-an-alien-dictionary/
Difficulty : Easy
Tags : Hash Table
*/

class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int index[26] = {0};
        for(int i=0; i<26; i++){
            index[order[i]-'a'] = i;
        }
        bool ans;
        for(int i=0, j; i<words.size()-1; i++){
            ans = true;
            for(j=0; j<words[i].size() && j<words[i+1].size();j++){
                if(index[words[i][j]-'a'] == index[words[i+1][j]-'a'])  continue;
                else{
                    if(index[words[i][j]-'a'] > index[words[i+1][j]-'a'])   ans = false;
                    break;
                }
            }
            if(ans){
                if(j == words[i].size() && j == words[i+1].size())  ans = true;
                else if(j == words[i+1].size())     ans = false;
            }
            if(!ans)    return false;
        }
        return true;
    }
};