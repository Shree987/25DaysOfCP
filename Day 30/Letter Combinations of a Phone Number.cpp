/*
Author : Shreeraksha R Aithal
Problem name : Letter Combinations of a Phone Number
Problem link : https://leetcode.com/problems/letter-combinations-of-a-phone-number/
Difficulty : Medium
Tags : Backtracking, Depth-first Search, Recursion, String
*/

class Solution {
public:
    vector<string> phone;
    vector<string> ans;
    string S;
    
    void recursion(string &s, int i, int n){
        if(i == n){
            ans.push_back(S);
        }
        else{
            for(auto k : phone[s[i]-'2']){
                S.push_back(k);
                recursion(s, i+1, n);
                S.pop_back();
            }
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0)  return ans;
        phone = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        recursion(digits, 0, digits.size());
        return ans;
    }
};