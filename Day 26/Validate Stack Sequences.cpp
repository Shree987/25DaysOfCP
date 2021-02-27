/*
Author : Shreeraksha R Aithal
Problem name : Validate Stack Sequences
Problem link : https://leetcode.com/problems/validate-stack-sequences/
Difficulty : Medium
Tags : Stack
*/

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int i = 0, j = 0, n = pushed.size();
        while(i<n){
            if(pushed[i] == popped[j]){
                i++;
                j++;
            }
            else if(!st.empty() && st.top() == popped[j]){
                st.pop();
                j++;
            }
            else{
                st.push(pushed[i]);
                i++;
            }
        }
        while(j<n && st.top() == popped[j]){
            j++;
            st.pop();
        }
        return (j==n);
    }
};