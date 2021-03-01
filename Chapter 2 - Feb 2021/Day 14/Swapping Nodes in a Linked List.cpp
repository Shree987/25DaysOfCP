/*
Author : Shreeraksha R Aithal
Problem name : Swapping Nodes in a Linked List
Problem link : https://leetcode.com/problems/swapping-nodes-in-a-linked-list/
Difficulty : Medium
Tags : Linked List
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
    ListNode* swapNodes(ListNode* head, int k) {
        int m = 1;
        ListNode *ptr1 = head, *ptr2 = head, *ptr3 = head;
        while(m<k){
            ptr1 = ptr1->next;
            m++;
        }
        ptr3 = ptr1;
        ptr1 = ptr1->next;
        while(ptr1 != nullptr){
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        swap(ptr2->val, ptr3->val);
        return head;
    }
};