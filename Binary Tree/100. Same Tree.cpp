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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        queue<pair<TreeNode*, TreeNode*>> qu;
        qu.push({p, q});

        while(!qu.empty()){
            TreeNode* f = qu.front().first;
            TreeNode* s = qu.front().second;
            qu.pop();

            if(f->left == NULL && s->left) return false;
            else if(f->right == NULL && s->right) return false;
            else if(s->left == NULL && f->left) return false;
            else if(s->right == NULL && f->right) return false;
            if(f->val != s->val) return false;
            if(s->right && f->right)
                if(s->right->val != f->right->val) return false;
            if(s->left && f->left)
                if(s->left->val != f->left->val) return false;

            if(f->left && s->left) qu.push({f->left, s->left});
            if(f->right && s->right) qu.push({f->right, s->right});
        }
        return true;
    
    }
};