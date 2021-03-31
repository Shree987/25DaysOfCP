/*
Author : Shreeraksha R Aithal
Problem name : N-ary Tree Postorder Traversal
Problem link : https://leetcode.com/problems/n-ary-tree-postorder-traversal/
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
    void Postorder(vector<int>& v, Node* root){
        if(root != nullptr){
            for(auto ptr : root->children){
                Postorder(v, ptr);
            }
            v.push_back(root->val);
        }
    }
public:
    vector<int> postorder(Node* root) {        
        vector<int> answer;
        Postorder(answer, root);        
        return answer;   
    }
};