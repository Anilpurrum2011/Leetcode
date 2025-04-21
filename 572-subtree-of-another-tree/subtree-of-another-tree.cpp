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
    bool SameTree(TreeNode* root1, TreeNode* root2){
        if(root1==nullptr && root2==nullptr){
            return true;
        }
        if(!root1 || !root2) return false;
        return (root1->val==root2->val)&&SameTree(root1->left,root2->left) && SameTree(root1->right,root2->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if((root==nullptr && subRoot==nullptr)|| (subRoot==nullptr)){
            return true;
        }
        if(root==nullptr && subRoot!=nullptr){
            return false;
        }
        if(SameTree(root,subRoot)) return true;
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};