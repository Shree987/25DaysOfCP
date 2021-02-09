/*
Author : Shreeraksha R Aithal
Problem name : Palindrome Linked List
Problem link : https://leetcode.com/problems/palindrome-linked-list/
Difficulty : Easy
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
private:
    ListNode *root;
    bool checkPalindrome(ListNode* head){
        if(head == nullptr)     return true;
        bool b = checkPalindrome(head->next);
        if(!b)  return false;
        else{
            if(head->val == root->val){
                root = root->next;
                return true;
            }
        }
        return false;
    }
public:
    bool isPalindrome(ListNode* head) {
        root = head;
        return checkPalindrome(head);
    }
};