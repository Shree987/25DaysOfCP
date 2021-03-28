/*
Author : Shreeraksha R Aithal
Problem name : Reconstruct Original Digits from English
Problem link : https://leetcode.com/problems/reconstruct-original-digits-from-english/
Difficulty : Medium
Tags : Math
*/

class Solution {
public:
    string originalDigits(string str) {
        vector<int> freq(26, 0);
        for(auto k : str){
            freq[k-'a']++;
        }
        string s = "";
        while(freq['z'-'a']>0){
            s.push_back('0');
            freq['z'-'a']--;    freq['e'-'a']--;    freq['r'-'a']--;    freq['o'-'a']--;
        }
        while(freq['w'-'a']>0){
            s.push_back('2');
            freq['t'-'a']--;    freq['w'-'a']--;    freq['o'-'a']--;
        }
        while(freq['x'-'a']>0){
            s.push_back('6');
            freq['s'-'a']--;    freq['i'-'a']--;    freq['x'-'a']--;
        }
        while(freq['g'-'a']>0){
            s.push_back('8');
            freq['e'-'a']--;    freq['i'-'a']--;    freq['g'-'a']--;    freq['h'-'a']--;    freq['t'-'a']--;
        }
        while(freq['s'-'a']>0){
            s.push_back('7');
            freq['s'-'a']--;    freq['e'-'a']-=2;    freq['v'-'a']--;    freq['n'-'a']--;
        }
                        
        while(freq['v'-'a']>0){
            s.push_back('5');
            freq['f'-'a']--;    freq['i'-'a']--;    freq['v'-'a']--;    freq['e'-'a']--;
        }
        while(freq['f'-'a']>0){
            s.push_back('4');
            freq['f'-'a']--;    freq['o'-'a']--;    freq['u'-'a']--;    freq['r'-'a']--;
        }
        while(freq['o'-'a']>0){
            s.push_back('1');
            freq['o'-'a']--;    freq['n'-'a']--;    freq['e'-'a']--;
        }
        while(freq['i'-'a']>0){
            s.push_back('9');
            freq['n'-'a']-=2;    freq['i'-'a']--;    freq['e'-'a']--;
        }
        while(freq['h'-'a']>0){
            s.push_back('3');
            freq['t'-'a']--;    freq['e'-'a']-=2;    freq['h'-'a']--;    freq['r'-'a']--;
        }
        sort(s.begin(),s.end());
        return s;
    }
};