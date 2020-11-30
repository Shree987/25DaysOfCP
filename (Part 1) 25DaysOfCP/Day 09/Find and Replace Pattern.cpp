/*
Author : Shreeraksha R Aithal
Problem name : Find and Replace Pattern
Problem link : https://leetcode.com/problems/find-and-replace-pattern/
Difficulty : Medium
Tags : Hashing, String
*/

class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> answer;
        int m = pattern.size();
        for(auto word : words){
            int n=word.size(),i;
            if(m!=n)    continue;
            map<char,char> a2b, b2a;
            for(i=0;i<n;i++){
                bool a = a2b.find(word[i])==a2b.end();
                bool b = b2a.find(pattern[i])==b2a.end();
                if((a && (!b)) || ( b && (!a)))    break;
                else if(a && b){
                    a2b[word[i]] = pattern[i];
                    b2a[pattern[i]] = word[i];
                }
                else{
                    if(a2b[word[i]]!=pattern[i] || b2a[pattern[i]] != word[i])  break;
                }
            }
            if(i==m)    answer.push_back(word);
        }
        return answer;
    }
};