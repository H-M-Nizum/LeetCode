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
int t=0;
int solve(TreeNode* root){
    if(root==NULL) return 0;
        
    int l = solve(root->left);
    int r = solve(root->right);
        
    t += abs(l - r);
    return root->val + l + r; 
}
class Solution {
public:
    
    int findTilt(TreeNode* root) {
        t = 0;
        solve(root);
        return t;
        
    }

};