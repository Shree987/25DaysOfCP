/*
Author : Shreeraksha R Aithal
Problem name : Vowel Spellchecker
Problem link : https://leetcode.com/problems/vowel-spellchecker/
Difficulty : Medium
Tags : Hash Table, String
*/

class Solution {
    bool isVowel(char c){
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    string Capitalization(string s){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        return s;
    }
    string VowelErrors(string s){
        for(int i = 0; i<s.size(); i++){
            if(isVowel(s[i])){
                s[i] = '.';
            }
            else{
                s[i] = toupper(s[i]);
            }
        }
        return s;
    }
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        vector<string> answer;
        string s;
        set<string> st;
        map<string, string> cap, vowel;
        for(auto word : wordlist){
            st.insert(word);
            s = Capitalization(word);
            if(cap.find(s) == cap.end())    cap[s] = word;
            s = VowelErrors(word);
            if(vowel.find(s) == vowel.end())    vowel[s] = word;
        }
        for(auto query : queries){
            if(st.find(query) != st.end()){
                answer.push_back(query);
            }
            else{
                s = Capitalization(query);
                if(cap.find(s) != cap.end()){
                    answer.push_back(cap[s]);
                }
                else{
                    s = VowelErrors(query);
                    if(vowel.find(s) != vowel.end()){
                        answer.push_back(vowel[s]);
                    }
                    else{
                        answer.push_back("");
                    }
                }
            }
        }
        return answer;
    }
};