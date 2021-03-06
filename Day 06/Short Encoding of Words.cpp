/*
Author : Shreeraksha R Aithal
Problem name : Short Encoding of Words
Problem link : https://leetcode.com/problems/short-encoding-of-words/
Difficulty : Medium
Tags : String
*/

class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        int i, n;
        string str;
        sort(words.rbegin(), words.rend());
        set<string> st;
        for(auto s : words){
            st.insert(s);
        }
        for(auto s : words){
            if(st.find(s) != st.end()){
                n = s.size();                
                for(i=0;i<n-1;i++){
                    str = s.substr(n-i-1, i+1);
                    if(st.find(str) != st.end())    st.erase(str);
                }
            }
        }
        i = 0;
        for(auto s : st){
            i += s.size()+1;
        }
        return i;
    }
};