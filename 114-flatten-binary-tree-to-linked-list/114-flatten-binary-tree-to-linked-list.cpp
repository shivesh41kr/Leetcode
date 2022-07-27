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
    TreeNode* prev=NULL;
     stack<TreeNode*>stk;
    void stkj(TreeNode* root){
       
        if(root==NULL){
            return;
        }
        stk.push(root);
        if(root->left!=NULL){
            
            stkj(root->left);
            
        }
         if(root->right!=NULL){
            stkj(root->right);
        }
        return;
    }
    void flatten(TreeNode* root) {
        stkj(root);
        while(!stk.empty()){
        TreeNode* temp=stk.top();
            stk.pop();
       temp->right=prev;
        temp->left=NULL;
            prev=temp;
        }
    }
};