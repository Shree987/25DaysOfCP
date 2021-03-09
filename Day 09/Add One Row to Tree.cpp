/*
Author : Shreeraksha R Aithal
Problem name : Add One Row to Tree
Problem link : https://leetcode.com/problems/add-one-row-to-tree/
Difficulty : Medium
Tags : Tree
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
private:
    void bfs(TreeNode *root, int depth, int d, int v){
        if(depth == d-1){
            TreeNode *ptr1 = new TreeNode(v, root->left, nullptr);
            TreeNode *ptr2 = new TreeNode(v, nullptr, root->right);
            root->left = ptr1;
            root->right = ptr2;
        }
        else{
            if(root->left != nullptr)   bfs(root->left, depth+1, d, v);
            if(root->right != nullptr)   bfs(root->right, depth+1, d, v);
        }
    }
    
public:
    TreeNode* addOneRow(TreeNode* root, int v, int d) {
        if(d == 1){
            TreeNode* ptr = new TreeNode(v, root,nullptr);
            return ptr;
        }
        bfs(root, 1, d, v);
        return root;
    }
};