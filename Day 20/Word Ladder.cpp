/*
Author : Shreeraksha R Aithal
Problem name : Word Ladder
Problem link : https://leetcode.com/problems/word-ladder/
Difficulty : Hard
Tags : Breadth-first Search
*/

class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        map<string, int> mapping;
        string temp, chars = "abcdefghijklmnopqrstuvwxyz";
        int i, n = endWord.size();
        for(auto str : wordList)   mapping[str] = -1;
        mapping[beginWord] = 1;
        queue<string> q;
        q.push(beginWord);
        while(mapping[endWord]==-1 && !q.empty()){
            string str = q.front();
            q.pop();
            for(i=0;i<n;i++){
                temp = str;
                char c = str[i];
                for(auto ch : chars){
                    temp[i] = ch;
                    if(mapping[temp] == -1){
                        mapping[temp] = mapping[str] + 1;
                        q.push(temp);
                    }
                }
            }
        }
        if(mapping[endWord] == -1)  mapping[endWord] = 0;
        return mapping[endWord];        
    }
};