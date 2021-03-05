/*
Author : Shreeraksha R Aithal
Problem name : Binary Tree Level Order Traversal II
Problem link : https://leetcode.com/problems/binary-tree-level-order-traversal-ii/
Difficulty : Medium
Tags : Breadth-first Search, Tree
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> answer;
        if(root == nullptr)     return answer;
        vector<int> v(1,1);
        queue<pair<TreeNode*,int>> q;
        int level = 0;
        q.push({root, 0});
        while(!q.empty()){
            root = q.front().first;
            level = q.front().second;
            q.pop();
            if(answer.size() == level){
                v[0] = root->val;
                answer.push_back(v);
            }
            else{
                answer[level].push_back(root->val);
            }
            if(root->left !=nullptr)    q.push({root->left, level+1});
            if(root->right !=nullptr)    q.push({root->right, level+1});
        }
        reverse(answer.begin(), answer.end());
        return answer;
        
    }
};