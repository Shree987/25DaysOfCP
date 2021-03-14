/*
Author : Shreeraksha R Aithal
Problem name : N-ary Tree Preorder Traversal
Problem link : https://leetcode.com/problems/n-ary-tree-preorder-traversal/
Difficulty : Easy
Tags : Tree
*/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {   
    void Preorder(vector<int>& v, Node* root){
        if(root != nullptr){
            v.push_back(root->val);
            for(auto ptr : root->children){
                Preorder(v, ptr);
            }
        }
    }
public:
    vector<int> preorder(Node* root) {       
        vector<int> answer;
        Preorder(answer, root);        
        return answer;          
    }
};