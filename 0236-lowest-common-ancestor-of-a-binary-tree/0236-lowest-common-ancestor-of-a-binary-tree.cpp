/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
bool func(TreeNode* root, TreeNode* p,vector<TreeNode*> &ans)
{
    if(!root)return false;
    ans.push_back(root);
    if(root==p)
    return true;
    if(func(root->left,p,ans) || func(root->right,p,ans))
    return true;
     ans.pop_back();
     return false;

}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>first,second;
        if (!func(root, p, first) || !func(root, q, second)) return nullptr;
        int i=0;
        while(i<first.size()&&i<second.size() && first[i]==second[i])
        i++;
        return first[i-1];
        
        
    }
};