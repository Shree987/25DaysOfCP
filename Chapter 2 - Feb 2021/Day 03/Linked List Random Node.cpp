/*
Author : Shreeraksha R Aithal
Problem name : Linked List Random Node
Problem link : https://leetcode.com/problems/linked-list-random-node/
Difficulty : Medium
Tags : Linked List
*/

class Solution {
    vector<int> Arr;
public:
    Solution(ListNode* head) {
        while(head){
            Arr.push_back(head->val);
            head = head->next;
        }
    }
    
    int getRandom() {
        return Arr[rand()%Arr.size()];        
    }
};