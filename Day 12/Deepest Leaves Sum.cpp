/*
Author : Shreeraksha R Aithal
Problem name : Deepest Leaves Sum
Problem link : https://leetcode.com/problems/deepest-leaves-sum/
Difficulty : Medium
Tags : Depth-first Search, Tree
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
    int depth, sum;
    void dfs(TreeNode* root, int depth){
        if(root == nullptr)     return ;
        if(root->left == nullptr && root->right == nullptr){
            if(depth == this->depth)    sum += root->val;
            else if(depth > this->depth){
                sum = root->val;
                this->depth = depth;
            }
        }
        else{
            dfs(root->left, depth+1);
            dfs(root->right, depth+1);
        }
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        sum = depth = 0;
        dfs(root, 0);
        return sum;
    }
};