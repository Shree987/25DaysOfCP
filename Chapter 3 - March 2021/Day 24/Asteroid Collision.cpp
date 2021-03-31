/*
Author : Shreeraksha R Aithal
Problem name : Asteroid Collision
Problem link : https://leetcode.com/problems/asteroid-collision/
Difficulty : Medium
Tags : Stack
*/

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto k : asteroids){
            if(st.empty())  st.push(k);
            else{
                if(st.top()*k > 0)  st.push(k);
                else{
                    if(st.top()<0){
                        st.push(k);
                    }
                    else{
                        while(!st.empty() && st.top()>0 && st.top()<abs(k)){
                            st.pop();
                        }
                        if(!st.empty() && st.top()<0)   st.push(k);
                        else if(!st.empty() && st.top() == abs(k))   st.pop();
                        else if(st.empty())    st.push(k);
                    }
                }
            }
        }
        asteroids.resize(st.size());
        for(int i = st.size()-1; i>=0; i--){
            asteroids[i] = st.top();
            st.pop();
        }
    return asteroids;
    }
};