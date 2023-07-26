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
    int ans = 0, c = 0;

    void solve(TreeNode* root, int k, int &ans, int &c){
        if(root == NULL){
            return;
        }

        solve(root->left, k, ans, c);
        c++;
        if(c == k){
            ans = root->val;
        }
        solve(root->right, k, ans, c);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        ans = 0;
        c = 0;
 
        solve(root, k, ans, c);
        return ans;
    }
};