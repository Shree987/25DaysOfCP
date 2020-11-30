/*
Author : Shreeraksha R Aithal
Problem name : Remove Duplicates from Sorted List II
Problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/
Difficulty : Medium
Tags : Linked List
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr)    return head;
        ListNode* root = new ListNode;
        ListNode *ptr1, *ptr2, *rt;
        ptr1 = head;
        rt = root;
        while(ptr1!=nullptr){
            ptr2 = ptr1->next;
            while(ptr2!=nullptr && ptr2->val == ptr1->val)  ptr2 = ptr2->next;
            if(ptr1->next == ptr2){
                rt->next = ptr1;
                rt = rt->next;
            }
            ptr1 = ptr2;
        }
        rt->next = nullptr;
        return root->next;
    }
};