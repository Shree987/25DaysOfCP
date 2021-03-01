/*
Author : Shreeraksha R Aithal
Problem name : Generate Parentheses
Problem link : https://leetcode.com/problems/generate-parentheses/
Difficulty : Medium
Tags : Backtracking, String
*/

class Solution {
private:
    vector<string> vs;
    void addNext(string s, int n, int k){
        if(s.size() == n+n){
            vs.push_back(s);
            return ;
        }
        if(k < n){
            s.push_back('(');
            addNext(s,n,k+1);
            s.pop_back();
        }
        if(s.size() < k+k){
            s.push_back(')');
            addNext(s,n,k);
            s.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        string s = "";
        addNext(s,n,0);
        return vs;
    }
};