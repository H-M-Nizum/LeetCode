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
    int ans = INT_MAX;
    TreeNode* tem = NULL;
    void solve(TreeNode* root){
        if(root == NULL) return;
        solve(root->left);
        if(tem != NULL){
            ans = min(ans, abs(tem->val - root->val));
        }
        tem = root;
        solve(root->right);
    }
    int minDiffInBST(TreeNode* root) {
        solve(root);
        return ans;
    }
};