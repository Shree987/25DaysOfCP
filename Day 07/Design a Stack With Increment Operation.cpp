/*
Author : Shreeraksha R Aithal
Problem name : Design a Stack With Increment Operation
Problem link : https://leetcode.com/problems/design-a-stack-with-increment-operation/
Difficulty : Medium
Tags : Design
*/

class CustomStack {
    vector<int> Stack;
    int index;
public:
    CustomStack(int maxSize) {
        Stack.resize(maxSize);
        index = -1;
    }
    
    void push(int x) {
        if(index+1 < Stack.size()){
            Stack[++index] = x;
        }
    }
    
    int pop() {
        if(index == -1) return -1;
        index--;
        return Stack[index+1];
    }
    
    void increment(int k, int val) {
        for(int i=0;i<k && i<=index; i++){
            Stack[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */