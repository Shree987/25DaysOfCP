/*
Author : Shreeraksha R Aithal
Problem name : Sum Root to Leaf Numbers
Problem link : https://leetcode.com/problems/sum-root-to-leaf-numbers/
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
    int answer = 0;
    void sumRootToLeaf(TreeNode* root, int sum){
        if(root == nullptr)     return ;
        if(root->left == nullptr && root->right == nullptr){
            answer += 10*sum + root->val;
        }
        else{
            sum = sum*10 + root->val;
            if(root->left != nullptr){
                sumRootToLeaf(root->left, sum);
            }
            if(root->right != nullptr){
                sumRootToLeaf(root->right, sum);
            }           
        }
    }
public:
    int sumNumbers(TreeNode* root) {
        answer = 0;
        sumRootToLeaf(root, 0);
        return answer;
    }
};