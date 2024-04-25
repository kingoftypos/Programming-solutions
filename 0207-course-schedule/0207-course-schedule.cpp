class Solution {
public:
    bool canFinish(int nc, vector<vector<int>>& pre) {
            vector<int> adj[nc];
            vector<int> inorder(nc, 0);  

             queue<int> q;
            for(int i=0;i<pre.size();i++)
            {
                int u=pre[i][0];
                int v=pre[i][1];
                adj[v].push_back(u);
            }
           
            
            for(int i=0;i<nc;i++)
            {
                for(auto it:adj[i])
                inorder[it]++;
            }
            for(int i=0;i<inorder.size();i++)
            {
                if(inorder[i]==0)
                q.push(i);
            }
            int cnt=0;
            while(!q.empty())
            {
                int node=q.front();
                q.pop();
                cnt++;
                for(auto it:adj[node])
                {
                    inorder[it]--;
                    if(inorder[it]==0)
                    q.push(it);
                }
            }
            return cnt==nc;
        
    }
};