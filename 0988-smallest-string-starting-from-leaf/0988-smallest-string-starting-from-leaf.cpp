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
    void traversal(TreeNode* root, vector<string> &minString, string &temp) {
        char ch = 'a' + root->val;
        temp += ch; 

        if (!root->left && !root->right) {
            reverse(temp.begin(), temp.end()); 
           minString.push_back(temp);
            reverse(temp.begin(), temp.end()); 
            if(temp.size()>0)temp.pop_back(); 
            return;
        }

        if (root->left) {
            traversal(root->left, minString, temp);
           
        }
        
        if (root->right) {
            traversal(root->right, minString, temp);
           
        }
        
       if(temp.size()>0)temp.pop_back();
    }
    
    string smallestFromLeaf(TreeNode* root) {
        vector<string> minString ;
        string temp = "";
        traversal(root, minString, temp);
        sort(minString.begin(),minString.end());
        return minString[0];
    }
};
