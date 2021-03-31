/*
Author : Shreeraksha R Aithal
Problem name : Check If Word Is Valid After Substitutions
Problem link : https://leetcode.com/problems/check-if-word-is-valid-after-substitutions/
Difficulty : Medium
Tags : Stack, String
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char c;
        for(auto k : s){
            if(k == 'c'){
                if(st.size() >= 2){
                    c = st.top();
                    st.pop();
                    if(c == 'b' && st.top()=='a'){
                        st.pop();
                    }   
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                st.push(k);
            }
        }
        return st.empty();
    }
};