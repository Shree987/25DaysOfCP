/*
Author : Shreeraksha R Aithal
Problem name : Top K Frequent Words
Problem link : https://leetcode.com/problems/top-k-frequent-words/
Difficulty : Medium
Tags : Hash Table, Heap, Trie
*/

bool compare(pair<int, string> A, pair<int, string> B){
    if(A.first != B.first)  return A.first > B.first;
    return A.second < B.second;
}

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        vector<pair<int, string>> vp;
        for(auto word : words){
            if(mp[word] == 0){
                mp[word] = vp.size()+1;
                vp.push_back({1, word});
            }
            else{
                vp[mp[word]-1].first++;
            }
        }
        sort(vp.begin(), vp.end(), compare);
        words.resize(k);
        for(int i=0; i<k; i++){
            words[i] = vp[i].second;
        }
        return words;        
    }
};