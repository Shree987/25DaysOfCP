/*
Author : Shreeraksha R Aithal
Problem name : Parsing A Boolean Expression
Problem link : https://leetcode.com/problems/parsing-a-boolean-expression/
Difficulty : Hard
Tags : String
*/

class Solution {
private:
    stack<char> exp,opr;    
    void eval(){
        bool b = (opr.top() == '|') ? false : true;
        while(exp.top() != '('){
            if(opr.top() == '!'){
                opr.pop();
                b = (exp.top() == 't');
                exp.pop();
                exp.pop();
                if(b)   exp.push('f');
                else    exp.push('t');
                return ;
            }
            else{
                if(opr.top() == '|'){
                    if(exp.top() == 't') b = true;
                }
                else{
                    if(exp.top() == 'f') b = false;
                }
            }
            exp.pop();
        }
        opr.pop();
        exp.pop();
        if(b)   exp.push('t');
        else    exp.push('f');
    }
    
    
public:
    bool parseBoolExpr(string expression) {
        if(expression == "t")   return true;
        if(expression == "f")   return false;
        char c;
        int i , n = expression.size();
        for(i=0;i<n;i++){
            if(expression[i] == ',')        continue;
            else if(expression[i] == '!' || expression[i] == '&' || expression[i] == '|')    opr.push(expression[i]);
            else if(expression[i] == '(' || expression[i] == 'f' || expression[i] == 't')       exp.push(expression[i]);
            else if(expression[i] == ')'){
                eval();
            }
        }
        return (exp.top() == 't');      
    }
};