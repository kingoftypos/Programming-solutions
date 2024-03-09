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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        queue<pair<TreeNode*,pair<int,int>>> q;
        map<int,map<int,multiset<int>>> mpp;
        q.push({root,{0,0}});
        while(!q.empty())
        {
            auto p=q.front();
            q.pop();
            auto temp=p.first;
            //x-vertical y-level
            int x=p.second.first,y=p.second.second;
            mpp[x][y].insert(temp->val);
            if(temp->left)q.push({temp->left,{x-1,y+1}});
            if(temp->right)q.push({temp->right,{x+1,y+1}});
        }
        for( auto it:mpp)
        {
            vector<int> col;
            for(auto it2:it.second)
            {
                col.insert(col.end(),it2.second.begin(),it2.second.end());
            }
            ans.push_back(col);
        }
        return ans;
        
    }
};