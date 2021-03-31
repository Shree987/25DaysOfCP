/*
Author : Shreeraksha R Aithal
Problem name : Reordered Power of 2
Problem link : https://leetcode.com/problems/reordered-power-of-2/
Difficulty : Medium
Tags : Math
*/

class Solution {
    bool answer;
    
    void recursion(int& m, string s, int index){
        if(index == s.size()){
            if(!answer && (m & (m-1)) == 0)  answer = true;
        }
        else if(answer)     return ;
        else{
            if(s[0] == '0')     return ;
            for(int j = index; !answer && j < s.size(); j++){
                swap(s[index], s[j]);
                m = m*10 + (s[index]-'0');
                recursion(m, s, index+1);
                m = m/10;
                swap(s[index], s[j]);
            }
        }
    }
    
public:
    bool reorderedPowerOf2(int N) {
        string s = to_string(N);
        answer = false;
        int m = 0;
        recursion(m, s, 0);
        return answer;
    }
};