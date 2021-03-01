/*
Author : Shreeraksha R Aithal
Problem name : Add Two Numbers
Problem link : https://leetcode.com/problems/add-two-numbers/
Difficulty : Medium
Tags : Linked List, Math, Recursion
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        ListNode *root, *ptr = new ListNode(l1->val + l2->val);
        int carry = ptr->val/10;
        ptr->val %= 10;
        l1 = l1->next;
        l2 = l2->next;
        root = ptr;
        while(carry>0 || l1!=nullptr || l2!=nullptr){
            if(l1 != nullptr){
                carry += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr){
                carry += l2->val;
                l2 = l2->next;
            }
            ListNode* nptr = new ListNode(carry%10);
            ptr->next = nptr;
            ptr = nptr;
            carry /=10;
        }
        return root;
    }
};