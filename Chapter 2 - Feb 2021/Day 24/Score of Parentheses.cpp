/*
Author : Shreeraksha R Aithal
Problem name : Score of Parentheses
Problem link : https://leetcode.com/problems/score-of-parentheses/
Difficulty : Medium
Tags : Stack, String
*/

class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> s;
        int score;
        for(auto c : S){
            if(c == '(')    s.push(-1);
            else{
                score = 0;
                while(s.top() != -1){
                    score += s.top();
                    s.pop();
                }
                s.pop();
                if(score == 0)      score = 1;
                else    score*=2;
                s.push(score);
            }
        }
        score = 0;
        while(!s.empty()){
            score += s.top();
            s.pop();
        }
        return score;
    }
};