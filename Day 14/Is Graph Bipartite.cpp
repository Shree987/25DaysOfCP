/*
Author : Shreeraksha R Aithal
Problem name : Is Graph Bipartite?
Problem link : https://leetcode.com/problems/is-graph-bipartite/
Difficulty : Easy
Tags : String
*/

class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size(), i, m; 
        vector<int> color(n, -1);
        queue<int> q;
        for(i=0;i<n;i++){
            if(color[i] == -1){
                color[i] = 0;
                q.push(i);
                while(!q.empty()){
                    m = q.front();
                    q.pop();
                    for(auto k : graph[m]){
                        if(color[k] == -1){
                            color[k] = 1 - color[m];
                            q.push(k);
                        }
                        else if(color[k] == color[m])   return false;
                    }
                }
            }
        }
        return true;
    }
};