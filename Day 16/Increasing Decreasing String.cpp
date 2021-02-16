/*
Author : Shreeraksha R Aithal
Problem name : Increasing Decreasing String
Problem link : https://leetcode.com/problems/increasing-decreasing-string/
Difficulty : Easy
Tags : String, Sort
*/

class Solution {
private:
    vector<string> ans;
    void perm(int i, string str){
        if(i == str.size()){
            ans.push_back(str);
        }
        else{
            if(isdigit(str[i]))     perm(i+1,str);
            else{
                str[i] = tolower(str[i]);
                perm(i+1,str);
                str[i] = toupper(str[i]);
                perm(i+1,str);
            }
        }
    }
public:
    vector<string> letterCasePermutation(string S) {
        int i,n = S.size();
        for(i=0;i<n;i++){
            S[i] = tolower(S[i]);
        }
        perm(0,S);
        return ans;
    }
    
};