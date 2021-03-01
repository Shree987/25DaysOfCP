/*
Author : Shreeraksha R Aithal
Problem name : Maximum Frequency Stack
Problem link : https://leetcode.com/problems/maximum-frequency-stack/
Difficulty : Hard
Tags : Hash Table, Stack
*/

class FreqStack {
    int max_freq;
    map<int, stack<int> > mp;
    map<int, int> hash;
public:
    FreqStack() {
        max_freq = 0;
    }
    
    void push(int x) {
        int freq = hash[x];
        max_freq = max(freq+1, max_freq);
        mp[freq+1].push(x);
        hash[x]++;
    }
    
    int pop() {
        int k = mp[max_freq].top();
        hash[k]--;
        if(hash[k] == 0){
            hash.erase(k);
        }
        mp[max_freq].pop();
        if(mp[max_freq].size() == 0){
            mp.erase(max_freq);
            max_freq--;
        }
        return k;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 */