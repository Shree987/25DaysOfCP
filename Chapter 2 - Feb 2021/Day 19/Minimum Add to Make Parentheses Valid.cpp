/*
Author : Shreeraksha R Aithal
Problem name : Minimum Add to Make Parentheses Valid
Problem link : https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/
Difficulty : Medium
Tags : Greedy, Stack
*/

class Solution {
public:
    int minAddToMakeValid(string S) {
        int i,j, cnt = 0, ans = 0;
        for(auto c : S){
            if(c == '('){
                cnt++;
            }
            else{
                if(cnt > 0){
                    cnt--;                   
                }
                else{
                    ans++;
                }
            }
        }
        return cnt + ans; 
    }
};