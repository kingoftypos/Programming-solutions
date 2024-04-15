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
void traversal(TreeNode* root,int &ans,int temp)
{
    if(!root->left && !root->right)
    {
        temp=temp*10 +root->val;
        ans+=temp;
        return;
    }
    if(root->left)
    {
        traversal(root->left,ans,temp*10+root->val);
    }
    if(root->right)
    {
        traversal(root->right,ans,temp*10+root->val);
    }

    
    
}
    int sumNumbers(TreeNode* root) {
        int temp=0;
        int ans=0;
        traversal(root,ans,temp);

        return ans;
    }
};