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
    TreeNode* convert(vector<int>& a, int l, int r){
        if (l > r)
            return NULL;
        TreeNode *root = new TreeNode(a[l]);
        TreeNode *leftRoot = NULL;
        TreeNode *rootRight = convert(a, l + 1, r);
        root->left = leftRoot;
        root->right = rootRight;
        return root;
    }
    void inorder(TreeNode *root, vector<int> &ans){
        if (root == NULL) return;

        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        return convert(ans, 0, ans.size()-1);
    }
};