#include <bits/stdc++.h> 
/*
Structure of the Node of the BST is :

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val) 
    {
        data = val;
        left = right = NULL;
    }
};
*/
int ans = 1000001;
void in_order(Node* root, int &ans){
        if(root == NULL) return;

        in_order(root->left, ans);
        ans = min(ans, root->data);
        in_order(root->right, ans);
        
    }
int findPrice(Node* root)
{
    // Write your code here.
    ans = 1000001;
    in_order(root, ans);
    return ans;
}