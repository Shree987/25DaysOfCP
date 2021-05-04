/*
Author : Shreeraksha R Aithal
Problem name : Design Circular Deque
Problem link : https://leetcode.com/problems/design-circular-deque/
Difficulty : Medium
Tags : Design, Queue
*/

class MyCircularDeque {
public:
    vector<int> cirQ;
    int start, end, len;
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) {
        cirQ.resize(k);
        len = k;
        start = end = -1;        
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {  
        if(isFull())   return false;
        if(end == -1){
            end = start = 0;
            cirQ[start] = value;
        }
        else{
            start = (start-1+len)%len;
            cirQ[start] = value;
        }
        return true;      
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(isFull())   return false;
        if(start == -1)     start = 0;
        end = (end+1)%len;
        cirQ[end] = value;
        return true;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(isEmpty())   return false;
        if(start == end){
            start = end = -1;
        }
        else{
            start = (start+1+len)%len;
        }        
        return true;        
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if(isEmpty())   return false;
        if(start == end){
            start = end = -1;
        }
        else{
            end = (end-1+len)%len;
        }        
        return true;  
        
    }
    
    /** Get the front item from the deque. */
    int getFront() {
        return (start>-1 ? cirQ[start] : -1);
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        return (end>-1 ? cirQ[end] : -1);
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return start == -1;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return (end+1)%len == start;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */