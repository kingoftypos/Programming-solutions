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

    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> ans;
         stack<TreeNode*> st1,st2;
         TreeNode* temp=root;
         if(temp==nullptr)return ans;
         st1.push(temp);
         while(!st1.empty())
         {
             temp=st1.top();
             st1.pop();
             st2.push(temp);
             if(temp->left!=nullptr)st1.push(temp->left);
             if(temp->right!=nullptr)st1.push(temp->right);
         }
         while(!st2.empty())
         {
             ans.push_back(st2.top()->val);
             st2.pop();
         }
         return ans;
    }
};