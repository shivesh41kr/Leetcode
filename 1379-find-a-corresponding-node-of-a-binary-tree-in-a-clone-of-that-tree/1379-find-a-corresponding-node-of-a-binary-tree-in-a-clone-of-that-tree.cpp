/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void inOrder(TreeNode* o_root, TreeNode* c_root, TreeNode* target) {
        if (o_root) {
            inOrder(o_root->left, c_root->left, target);
            if (o_root == target) {
				 ans = c_root;
				 return;
			}
            inOrder(o_root->right, c_root->right, target);
        }
    }
	
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        inOrder(original, cloned, target);
        return ans;
    }
private:
    TreeNode* ans;
};