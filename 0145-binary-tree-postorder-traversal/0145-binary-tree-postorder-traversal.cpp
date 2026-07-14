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
// class Solution {
// public:
// vector<int> ans;
//     void trav(TreeNode* root,vector<int>&ans) {
//         if(root==NULL) return;
//         trav(root->left,ans);
//         trav(root->right,ans);
//         ans.push_back(root->val);
//     }
//     vector<int> postorderTraversal(TreeNode* root){
//         vector<int>ans;
//         trav(root,ans);
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> ans;

    vector<int> postorderTraversal(TreeNode* root) {
        if (root == NULL)
            return ans;

        postorderTraversal(root->left);
        postorderTraversal(root->right);  
        ans.push_back(root->val);

        return ans;                        
    }
};