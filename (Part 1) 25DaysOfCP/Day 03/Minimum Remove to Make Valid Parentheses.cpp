/*
Author : Shreeraksha R Aithal
Problem name : Minimum Remove to Make Valid Parentheses
Problem link : https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
Difficulty : Medium
Tags : Stack, Strings
*/

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int i, n = s.size(), cnt = 0;
        for(i=0;i<n;i++){
            if(s[i] == '(')        cnt++;
            else if(s[i] == ')'){
                if(cnt==0)         s[i] = '*';
                else    cnt--;
            }
        }
        if(cnt>0){
            cnt = 0;
            for(i=n-1;i>=0;i--){
                if(s[i] == ')')   cnt++;  
                else if(s[i] == '('){
                    if(cnt==0)      s[i] = '*';
                    else            cnt--;
                }
            }
        }
        s.erase(remove(s.begin(),s.end(), '*'), s.end());
        return s;
    }
};