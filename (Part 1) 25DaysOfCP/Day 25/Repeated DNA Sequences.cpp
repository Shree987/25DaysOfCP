/*
Author : Shreeraksha R Aithal
Problem name : Repeated DNA Sequences
Problem link : https://leetcode.com/problems/repeated-dna-sequences/
Difficulty : Medium
Tags : String, HashTable
*/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        set<string> set1,set2;
        vector<string> ans;
        string str;
        int n=s.size(), i, j;
        for(i=0;i<n-9;i++){
            str = s.substr(i,10);
            if(set1.find(str) == set1.end())    set1.insert(str);
            else if(set2.find(str) == set2.end()){
                set2.insert(str);
                ans.push_back(str);
            }
        }
        return ans;
    }
};