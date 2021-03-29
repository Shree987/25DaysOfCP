/*
Author : Shreeraksha R Aithal
Problem name : Flip Binary Tree To Match Preorder Traversal
Problem link : https://leetcode.com/problems/flip-binary-tree-to-match-preorder-traversal/
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
    vector<int> ans;
    int index;
    
    bool dfs(TreeNode* root, vector<int>& voyage){
        if(index == voyage.size())  return true;
        if(root->val != voyage[index]){
            return false;
        }
        int j = index;
        index++;
        if(root->left == nullptr && root->right == nullptr)     return true;
        else if(root->left != nullptr && root->right != nullptr){
            if(root->left->val == voyage[index]){
                if(!dfs(root->left, voyage)){
                    index = j;
                    return false;
                }
                else{
                    if(!dfs(root->right, voyage)){
                        index = j;
                        return false;
                    }
                    return true;
                }
            }
            else if(root->right->val == voyage[index]){
                swap(root->left, root->right);
                ans.push_back(root->val);
                if(!dfs(root->left, voyage)){
                    index = j;
                    ans.pop_back();
                    return false;
                }
                else{
                    if(!dfs(root->right, voyage)){
                        index = j;
                        ans.pop_back();
                        return false;
                    }
                    return true;
                }
            }
            else{
                index = j;
                return false;
            }
        }
        else if(root->left == nullptr){
            if(root->right->val == voyage[index]){
                if(!dfs(root->right, voyage)){
                    index = j;
                    return false;
                }
                else{
                    return true;
                }
            }
            else{
                index = j;
                return false;
            }
        }
        else{
            if(root->left->val == voyage[index]){
                if(!dfs(root->left, voyage)){
                    index = j;
                    return false;
                }
                else{
                    return true;
                }
            }
            else{
                index = j;
                return false;
            }
            
        }
    }
public:
    vector<int> flipMatchVoyage(TreeNode* root, vector<int>& voyage) {
        index = 0;
        if(!dfs(root, voyage)){
            ans.clear();
            ans.push_back(-1);
        }
        return ans;
    }
};