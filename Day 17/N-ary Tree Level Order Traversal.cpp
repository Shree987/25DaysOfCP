/*
Author : Shreeraksha R Aithal
Problem name : N-ary Tree Level Order Traversal
Problem link : https://leetcode.com/problems/n-ary-tree-level-order-traversal/
Difficulty : Medium
Tags : Tree
*/

class Solution {
    vector<vector<int>> answer;
    void findNext(Node* root, int i){
        if(root == nullptr) return;
        if(answer.size() <= i){
            answer.resize(i+1);
        }
        answer[i].push_back(root->val);
        for(auto ptr : root->children){
            if(ptr)  findNext(ptr, i+1);
        }
    }
public:
    vector<vector<int>> levelOrder(Node* root) {
        findNext(root, 0);
        return answer;
    }
};