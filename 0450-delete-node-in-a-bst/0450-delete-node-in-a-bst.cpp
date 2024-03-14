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
TreeNode* findright(TreeNode* root)
{
    if(root->right==nullptr)return root;
    return findright(root->right);

}
TreeNode* helper(TreeNode* root)
{
    if(root->left==nullptr)return root->right;
    else if(root->right==nullptr)root->left;
    TreeNode* rightchild=root->right;
    TreeNode* rightmost=findright(root->left);
    rightmost->right=rightchild;
    return root->left;
}
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)return nullptr;
        if(root->val==key)
        return helper(root);
        TreeNode* curr=root;
        while(root)
        {
            if(root->val>key)
            {
                if(root->left && root->left->val==key)
                {
                    root->left=helper(root->left);
                    break;
                }
                else
                root=root->left;
            }
            else
            {
                if(root->right && root->right->val==key)
                {
                    root->right=helper(root->right);
                }
                else
                root=root->right;
            }
        }
        return curr;
        
    }
};