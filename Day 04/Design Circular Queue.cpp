/*
Author : Shreeraksha R Aithal
Problem name : Design Circular Queue
Problem link : https://leetcode.com/problems/design-circular-queue/
Difficulty : Medium
Tags : Design, Queue
*/

class MyCircularQueue {
public:
    vector<int> cirQ;
    int start, end, len;
    MyCircularQueue(int k) {
        cirQ.resize(k);
        len = k;
        start = end = -1;
    }
    
    bool enQueue(int value) {
        if(isFull())   return false;
        if(start == -1)     start = 0;
        end = (end+1)%len;
        cirQ[end] = value;
        return true;        
    }
    
    bool deQueue() {
        if(isEmpty())   return false;
        if(start == end){
            start = end = -1;
        }
        else{
            start = (start+1+len)%len;
        }        
        return true;
    }
    
    int Front() {
        return (start>-1 ? cirQ[start] : -1);
    }
    
    int Rear() {
        return (end>-1 ? cirQ[end] : -1);
    }
    
    bool isEmpty() {
        return start == -1;
    }
    
    bool isFull() {
        return (end+1)%len == start;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */