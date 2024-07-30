class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        
        vector<int> vis(n,0);
        queue<int> q;
        vector<int> adj[n];
        vector<int> topo;
        vector<int> indegree(n,0);
        for(int i=0;i<pre.size();i++)
        {
            adj[pre[i][1]].push_back(pre[i][0]);
        }
        for(int i=0;i<n;i++)
        {
            for(int it:adj[i])
            {
                indegree[it]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(!indegree[i])
            q.push(i);
        }
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(int it:adj[node])
            {
                indegree[it]--;
                if(indegree[it]==0)
                q.push(it);
            }
        }
        return n==topo.size();
        
    }
};