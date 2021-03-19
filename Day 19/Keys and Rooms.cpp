/*
Author : Shreeraksha R Aithal
Problem name : Keys and Rooms
Problem link : https://leetcode.com/problems/keys-and-rooms/
Difficulty : Medium
Tags : Depth-first Search, Graph
*/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size(), m, cnt = n-1;
        vector<bool> visit(n, false);
        visit[0] = true;
        queue<int> q;
        q.push(0);
        while(!q.empty() && cnt>0){
            m = q.front();
            q.pop();
            for(auto k : rooms[m]){
                if(!visit[k]){
                    visit[k] = true;
                    cnt--;
                    q.push(k);
                }
            }
        }
        return cnt == 0;
    }
};