/*
Author : Shreeraksha R Aithal
Problem name : Convert BST to Greater Tree
Problem link : https://leetcode.com/problems/convert-bst-to-greater-tree/
Difficulty : Medium
Tags : Breadth-first search, Depth-first search, Recursion, Tree
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int sum;
    void BST(TreeNode* root){
        if(root == nullptr)     return ;
        BST(root->right);
        root->val+=sum;
        sum = root->val;
        BST(root->left);
    }
public:
    TreeNode* convertBST(TreeNode* root) {
        sum = 0;
        BST(root);
        return root;
    }    
};