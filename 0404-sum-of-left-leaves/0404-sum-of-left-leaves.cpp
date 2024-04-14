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
    void traversal(TreeNode* root,int &sum,bool flag)
    {
        if(!root->left && !root->right && flag)
        {
            sum+=root->val;
            return;
        }
        if(root->left)
        traversal(root->left,sum,true);
        if(root->right)
        traversal(root->right,sum,false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        traversal(root,sum,false);
        return sum;
        
    }
};