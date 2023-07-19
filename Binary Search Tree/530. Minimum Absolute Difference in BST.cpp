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
 int result = 100001;
class Solution {
public:
    int result = 100001;
    void inorder(TreeNode *root, vector<int> &ans){
        if (root == NULL) return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        int n = ans.size()-1;
        for(int i=0; i<n; i++){
            result = min(result, abs(ans[i] - ans[i+1]));
        }
        return result;
    }
};