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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* nd =new TreeNode(val);
        if(!root) return nd;
        TreeNode* node=root;
        while (1) {
            if (root->val > val) {
                if(root->left==NULL){
                    root->left=nd;
                    break;       
                }
                root = root->left;
            } else{
                if(root->right==NULL){
                    root->right=nd;
                    break;       
                }
                root=root->right;
            }         
        }
        return node;
    }
};