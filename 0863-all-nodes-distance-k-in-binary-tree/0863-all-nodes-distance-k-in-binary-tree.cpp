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
    void getparent( map<TreeNode*,TreeNode*> &parent,TreeNode* root)
    {
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
           
            TreeNode* temp=q.front();
            q.pop();
           if(temp->left)
           {
           parent[temp->left]=temp;
           q.push(temp->left);
           }
           if(temp->right)
           {
           parent[temp->right]=temp;
            q.push(temp->right);
           }

        }


    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        map<TreeNode*,TreeNode*> parent;
        getparent(parent,root);
        queue<TreeNode*> q;
        unordered_map<TreeNode*,bool> visited;
        q.push(target);
        visited[target]=true;
        while(!q.empty())
        {
            int sz=q.size();
            if((k--)==0)break;
            for(int i=0;i<sz;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left && !visited[temp->left] )
                {
                    q.push(temp->left);
                    visited[temp->left]=true;
                }
                if(temp->right && !visited[temp->right])
                {
                    q.push(temp->right);
                    visited[temp->right]=true;
                }
                if(parent[temp] && !visited[parent[temp]])
                {
                    q.push(parent[temp]);
                    visited[parent[temp]]=true;
                }
               
            }
           

        }
        while(!q.empty())
        {
            int v=q.front()->val;
            q.pop();
            ans.push_back(v);
        }
        return ans;
        
    }
};