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
//  */
// class Solution {
// public:
//     bool isValidBST(TreeNode* root) {
//         return validate(root, LONG_MIN, LONG_MAX);
//     }

//     bool validate(TreeNode* node, long minVal, long maxVal) {
//         if (node == nullptr) return true;

//         if (node->val <= minVal || node->val >= maxVal)
//             return false;

//         return validate(node->left, minVal, node->val) &&
//                validate(node->right, node->val, maxVal);
//     }
// };



class Solution {
public:
    bool isValidBST(TreeNode* root) {
      return valid(root,LONG_MIN,LONG_MAX);
    }
    bool valid(TreeNode* root,long minval,long maxval){
        if(root==nullptr)return true;
        if(root->val<=minval || root->val>=maxval){
            return false;
        }
        return valid(root->left,minval,root->val) &&
               valid(root->right,root->val,maxval);
    }
};