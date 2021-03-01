/*
Author : Shreeraksha R Aithal
Problem name : Binary Tree Right Side View
Problem link : https://leetcode.com/problems/binary-tree-right-side-view/
Difficulty : Medium
Tags : Breadth-first Search, Depth-first Search, Queue, Recursion, Tree
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root == nullptr) return ans;
        queue<pair<TreeNode*, int>> q;
        int n,m;
        q.push({root, 0});
        while(!q.empty()){
            m = q.front().second;
            root = q.front().first;
            q.pop();
            if(m == ans.size()){
                ans.push_back(root -> val);
            }
            else{
                ans[m] = root->val;
            }
            if(root->left != nullptr){
                q.push({root->left, m+1});
            }
            if(root->right != nullptr){
                q.push({root->right, m+1});
            }
        }
        return ans;
    }
};