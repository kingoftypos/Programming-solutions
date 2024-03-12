/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string ans="";
        if(root==nullptr)return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp==nullptr)ans.append("NULL,");
            else ans.append(to_string(temp->val)+',');
            if(temp)
            {
                q.push(temp->left);
                q.push(temp->right);
            }

        }
        return ans;
        
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0)return nullptr;
        //iterate over data object
        stringstream s(data);
        string str;
        //iterate over s object on occurence of ',' and put them into str
        getline(s,str,',');
        TreeNode* root=new TreeNode(stoi(str));
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            getline(s,str,',');
            if(str=="NULL")
            node->left=nullptr;
            else
            {
                TreeNode* newnode=new TreeNode(stoi(str));
                node->left=newnode;
                q.push(newnode);
            }
            getline(s,str,',');
             if(str=="NULL")
            node->right=nullptr;
            else
            {
                TreeNode* newnode1=new TreeNode(stoi(str));
                node->right=newnode1;
                q.push(newnode1);
            }

        }
        return root;

        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));