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

vector<int> v1;
vector<int> v2;
void push_leaf_v1(TreeNode* root){
    if(root == NULL) return;
    push_leaf_v1(root->left);
    push_leaf_v1(root->right);
    if(root->left == NULL && root->right == NULL) v1.push_back(root->val);
}
void push_leaf_v2(TreeNode* root){
    if(root == NULL) return;
    push_leaf_v2(root->left);
    push_leaf_v2(root->right);
    if(root->left == NULL && root->right == NULL) v2.push_back(root->val);
}
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        v1.clear();
        v2.clear();

        

        push_leaf_v1(root1);
        push_leaf_v2(root2);

        for(int i=0; i<v1.size(); i++){
            cout<<v1[i]<<" ";
        }
        cout<<endl;
         for(int i=0; i<v2.size(); i++){
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        if(v1.size() != v2.size()){
            return false;
            
        }
        
        else{
            for(int i=0; i<v1.size(); i++){
                if(v1[i] != v2[i]) return false;
            }
            return true;
        }
        
    }
};