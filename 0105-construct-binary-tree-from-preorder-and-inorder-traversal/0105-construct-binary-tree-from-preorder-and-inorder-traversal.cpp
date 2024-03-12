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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>inmap;
        for(int i=0;i<inorder.size();i++)
        inmap[inorder[i]]=i;
         TreeNode* root=build(inorder,0,inorder.size()-1,preorder,0,preorder.size()-1,inmap);
         return root;
        
    }
    TreeNode* build(vector<int>&inorder, int instart,int inend,vector<int> &preorder,int prestart,int preend,map<int,int> &inmap)
    {
        if(prestart>preend || instart>inend)return nullptr;
        TreeNode * root=new TreeNode(preorder[prestart]);
        int inRoot=inmap[root->val];
        int left=inRoot-instart;
        root->left=build(inorder,instart,inRoot-1,preorder,prestart+1,prestart+left,inmap);
        root->right=build(inorder,inRoot+1,inend,preorder,prestart+left+1,preend,inmap);
        return root;
    }
};