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
    int size(TreeNode* root){
        return (root==nullptr)?0:1+size(root->left)+size(root->right);
    }
    bool isCompleteTree(TreeNode* root) {
      int s=size(root);
      return CBT(root,0,s);
    }
    bool CBT(TreeNode* root,int i,int s){
        if(root==nullptr)return true;
        if(i>=s)return false;
        return CBT(root->left,2*i+1,s)&&CBT(root->right,2*i+2,s);
    }
};