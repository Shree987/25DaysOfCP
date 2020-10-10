/*
Author : Shreeraksha R Aithal
Problem name : N-ary Tree Preorder Traversal
Problem link : https://leetcode.com/problems/n-ary-tree-preorder-traversal/
Difficulty : Easy
Tags : Tree
*/

class Solution {
    vector<int> answer;
    void findNext(Node* root){
        if(root == nullptr) return;
        answer.push_back(root->val);
        for(auto ptr : root->children){
            if(ptr)  findNext(ptr);
        }
    }
public:
    vector<int> preorder(Node* root) {
        findNext(root);
        return answer;        
    }
};