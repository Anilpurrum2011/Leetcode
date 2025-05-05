// /**
//  * Definition for a binary tree node.
//  * struct TreeNode {
//  *     int val;
//  *     TreeNode *left;
//  *     TreeNode *right;
//  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
//  * };
//  */
// class Solution {
// public:
//     void inorder(TreeNode* root,vector<int>&ans){
//         if(!root) return;
//         inorder(root->left,ans);
//         ans.push_back(root->val);
//         inorder(root->right,ans);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int>ans;
//         if(!root) return ans;
//         inorder(root,ans);
//         return ans;
//     }
// };

// iterative approach

// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         stack<TreeNode*> st;
//         while (root != nullptr || !st.empty()) {
//             while (root != nullptr) {
//                 st.push(root);
//                 root = root->left;
//             }
//             root = st.top();
//             st.pop();
//             ans.push_back(root->val);
//             root = root->right;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(!root) return ans;
        inorder(root,ans);
        return ans;
    }
};
