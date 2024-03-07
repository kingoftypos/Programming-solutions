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
void getpostorder(vector<int> &post,TreeNode *root)
{
    TreeNode *temp=root;
    if(temp==nullptr)
    return;
    
    
    getpostorder(post,temp->left);
    getpostorder(post,temp->right);
    post.push_back(temp->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> post;
    getpostorder(post,root);
    return post;
    }
};