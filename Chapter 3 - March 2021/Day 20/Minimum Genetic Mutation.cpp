/*
Author : Shreeraksha R Aithal
Problem name : Minimum Genetic Mutation
Problem link : https://leetcode.com/problems/minimum-genetic-mutation/
Difficulty : Medium
Tags : Breadth-first Search
*/

class Solution {
public:
    int minMutation(string start, string end, vector<string>& bank) {
        map<string, int> mapping;
        string temp, gene = "ACGT";
        int i;
        for(auto str : bank)   mapping[str] = -1;
        mapping[start] = 1;
        queue<string> q;
        q.push(start);
        while(mapping[end]==-1 && !q.empty()){
            string str = q.front();
            q.pop();
            for(i=0;i<8;i++){
                temp = str;
                char c = str[i];
                for(auto ch : gene){
                    temp[i] = ch;
                    if(mapping[temp] == -1){
                        mapping[temp] = mapping[str] + 1;
                        q.push(temp);
                    }
                }
            }
        }
        if(mapping[end] != -1)  mapping[end]--;
        return mapping[end];
    }
};