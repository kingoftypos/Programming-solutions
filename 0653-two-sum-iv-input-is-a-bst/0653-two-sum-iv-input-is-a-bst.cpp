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
 
    class BSTIterator {
public:
stack<TreeNode*> st;
bool reverse =true;
    BSTIterator(TreeNode* root,bool thisreverse) {
         reverse=thisreverse;
         pushleft(root);

    }
    
    int next() {
        TreeNode* temp=st.top();
        st.pop();
        if(!reverse)
        pushleft(temp->right);
        else
        pushleft(temp->left);
        return temp->val;

    }
    
    bool hasNext() {
        return !st.empty();
        
    }
    void pushleft(TreeNode* root)
    {
        while(root)
        {
            st.push(root);
            if(reverse)
            root=root->right;
            else
            root=root->left;
        }
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
        if(!root)return true;
        BSTIterator r(root,true);
        BSTIterator l(root,false);
        int ln=l.next();
        int rn=r.next();
        while(ln<rn)
        {
        if(ln+rn==k)return true;
        else if(ln+rn < k)ln=l.next();
        else rn=r.next();
        }
        return false;


        
    }
};