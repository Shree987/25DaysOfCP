/*
Author : Shreeraksha R Aithal
Problem name : Keyboard Row
Problem link : https://leetcode.com/problems/keyboard-row/
Difficulty : Easy
Tags : Hashing, String
*/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<int> v(26,0);
        for(auto c : "qwertyuiop"){
            if(isalpha(c))
                v[c-'a']=1;
        }
        for(auto c : "asdfghjkl"){
            if(isalpha(c))
                v[c-'a']=2;
        }
        for(auto c : "zxcvbnm"){
            if(isalpha(c))
                v[c-'a']=3;
        }
        int i,n = words.size(),j,m;
        vector<string> ans;
        for(i=0;i<n;i++){
            m = words[i].size();
            for(j=1;j<m;j++){
                if(v[tolower(words[i][j]) - 'a'] !=v[tolower(words[i][0]) - 'a'])
                    break;
            }
            if(j==m)    ans.push_back(words[i]);
        }
        return ans;
    }
};