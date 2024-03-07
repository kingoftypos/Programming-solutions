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
void getpreorder(vector<int> &pre,TreeNode *root)
{
    TreeNode *temp=root;
    if(temp==nullptr)
    return;
     pre.push_back(temp->val);
    getpreorder(pre,temp->left);
    getpreorder(pre,temp->right);
}
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> pre;
        getpreorder(pre,root);
        return pre;
    }
};