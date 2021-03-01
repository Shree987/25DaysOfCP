/*
Author : Shreeraksha R Aithal
Problem name : Remove Nth Node From End of List
Problem link : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
Difficulty : Medium
Tags : Linked List, Two Pointers
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ptr, *root = head;
        int i, m = 0;
        while(root != nullptr){
            root = root->next;
            m++;
        }
        if(m == n)  return head->next;
        n++;
        ptr = head;
        while(n>0){
            ptr = ptr->next;
            n--;
        }
        root = head;
        while(ptr!=nullptr){
            ptr = ptr->next;
            root = root->next;
        }
        root->next = (root->next)->next;
        return head;
    }
};