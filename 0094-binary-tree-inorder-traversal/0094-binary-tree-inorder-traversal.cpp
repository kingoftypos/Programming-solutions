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
void getinorder(vector<int> &inor,TreeNode *root)
{
    TreeNode *temp=root;
    if(temp==nullptr)
    return;
    getinorder(inor,temp->left);
    inor.push_back(temp->val);
    getinorder(inor,temp->right);
}
    vector<int> inorderTraversal(TreeNode* root) {
         vector<int> inor;
    getinorder(inor,root);
    return inor;
        
    }
};