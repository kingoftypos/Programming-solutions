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
void flat(TreeNode* &prev,TreeNode* root)
{
    if(root==nullptr)
    return;
    flat(prev,root->right);
    flat(prev,root->left);
    root->right=prev;
    root->left=nullptr;
    prev=root;
}
    void flatten(TreeNode* root) {
        TreeNode* prev=nullptr;
        flat(prev,root);
        
    }
};