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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==nullptr)return ans;
        queue<TreeNode*> q;
        q.push(root);
       
        bool flag=1;
        while(!q.empty())
        {
             int sz=q.size();
             vector<int> level(sz);
           
             for(int i=0;i<sz;i++)
             {
                  TreeNode* temp=q.front();
                  q.pop(); 
                  int index=(flag) ? i:(sz-1-i);
                  level[index]=temp->val;
                  if(temp->left)q.push(temp->left);
                  if(temp->right)q.push(temp->right);
             }
             flag=!flag;
             ans.push_back(level);
        }
        return ans;

        
    }
};