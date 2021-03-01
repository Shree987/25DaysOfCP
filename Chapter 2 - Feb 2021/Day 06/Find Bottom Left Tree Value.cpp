/*
Author : Shreeraksha R Aithal
Problem name : Find Bottom Left Tree Value
Problem link : https://leetcode.com/problems/find-bottom-left-tree-value/
Difficulty : Medium
Tags : Breadth-first Search, Depth-first Search, Tree
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
public:
    int findBottomLeftValue(TreeNode* root) {
        int ans;
        queue<TreeNode*> q;
        int n,m;
        q.push(root);
        while(!q.empty()){
            root = q.front();
            q.pop();
            ans = root->val;
            if(root->right != nullptr){
                q.push(root->right);
            }
            if(root->left != nullptr){
                q.push(root->left);
            }
        }
        return ans;        
    }
};