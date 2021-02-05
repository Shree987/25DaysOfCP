/*
Author : Shreeraksha R Aithal
Problem name : Simplify Path
Problem link : https://leetcode.com/problems/simplify-path/
Difficulty : Medium
Tags : Stack, String
*/

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int i,j=0,k,n = path.size();
        while(j<n && path[j]=='/')  j++;
        for(i=j;i<n;i++){
            if(path[i] == '/'){
                string s = path.substr(j,i-j);
                j = i;
                while(j<n && path[j] == '/')    j++;
                i = j;
                if(s == ".")    continue;
                else if(s == ".."){
                    if(!st.empty())     st.pop();
                }
                else{
                    st.push(s);
                }
            }
        }
        if(j!=n){
            string s = path.substr(j,i-j);
            if(s == ".")   ;
            else if(s == ".."){
                if(!st.empty())     st.pop();
            }
            else{
                st.push(s);
            }
        }
        path = "";
        if(st.empty()){
            return "/";
        }
        while(!st.empty()){
            path = "/" + st.top() + path;
            st.pop();
        }
        return path;
    }
};