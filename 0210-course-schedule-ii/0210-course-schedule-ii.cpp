class Solution {
public:
    vector<int> findOrder(int nc, vector<vector<int>>& pr) {
        vector<int> adj[nc];
        for(int i=0;i<pr.size();i++)
        {
            int u=pr[i][0];
            int v=pr[i][1];
            adj[v].push_back(u);
            
         }
        vector<int> indegree(nc,0);
        for(int i=0;i<nc;i++)
        {
            for(auto it:adj[i])
            {
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<nc;i++)
        {
            if(indegree[i]==0)
           q.push(i);
        }
        vector<int> ans;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                q.push(it);
            }
        }
        return ans.size()==nc?ans : vector<int>{};
        

        
    }
};