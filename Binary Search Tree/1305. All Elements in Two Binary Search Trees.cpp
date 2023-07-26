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
    void in_order(TreeNode* root, multiset<int> &ml){
        if(root == NULL) return;

        in_order(root->left, ml);
        ml.insert(root->val);
        in_order(root->right, ml);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        multiset<int> ml;
        in_order(root1, ml);
        in_order(root2, ml);
        vector<int> v;
        for(auto i:ml){
            v.push_back(i);
        }
        return v;
    }
};