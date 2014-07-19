/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode *root) {
        stack<TreeNode*> temp;
        vector<int> res;
        if (!root)
            return res;
        while (!temp.empty() || root) {
            if (root) {
                temp.push(root);
                root = root->left;
            }
            else {
                root = temp.top();
                temp.pop();
                res.push_back(root->val);
                root = root->right;
            }
        } 
        return res;
    }
};