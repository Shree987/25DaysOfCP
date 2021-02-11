/*
Author : Shreeraksha R Aithal
Problem number : 61
Problem name : Rotate List
Problem link : https://leetcode.com/problems/rotate-list/
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr)    return head;
        ListNode *root, *ptr = head, *end;
        int n = 0;
        while(ptr != nullptr){
            n++;
            if(ptr->next == nullptr)    end = ptr;
            ptr = ptr->next;
        }
        
        k = k%n;
        if(k == 0)      return head;
        k = n-k;
        n = 0;
        ptr = head;
        while(n<k-1){
            ptr = ptr->next;
            n++;
        }
        root = ptr->next;
        ptr->next = nullptr;
        end->next = head;
        return root;
    }
};