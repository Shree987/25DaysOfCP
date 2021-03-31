/*
Author : Shreeraksha R Aithal
Problem number : 150
Problem name : Evaluate Reverse Polish Notation
Problem link : https://leetcode.com/problems/evaluate-reverse-polish-notation/
Difficulty : Medium
Tags : Stack
*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> val;
        for(auto c : tokens){
            if(c == "+"){
                int a = val.top();
                val.pop();
                int b = val.top();
                val.pop();
                val.push(a+b);
            }
            else if(c == "-"){
                int a = val.top();
                val.pop();
                int b = val.top();
                val.pop();
                val.push(b-a);
            }
            else if(c == "*"){
                int a = val.top();
                val.pop();
                int b = val.top();
                val.pop();
                val.push(a*b);
            }
            else if(c == "/"){
                int a = val.top();
                val.pop();
                int b = val.top();
                val.pop();
                val.push(b/a);
            }
            else{
                val.push(stoi(c));
            }
        }
        return val.top();
        return 0;
    }
};