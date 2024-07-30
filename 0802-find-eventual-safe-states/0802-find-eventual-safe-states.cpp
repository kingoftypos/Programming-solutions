class Solution {
public:
        bool dfs(vector<vector<int>> &graph,vector<int> &vis,vector<int> &pathvis,vector<int> &check,int node)
        {
            vis[node]=1;
            pathvis[node]=1;
            for(auto it:graph[node])
            {
                if(!vis[it])
                {
                    if(dfs(graph,vis,pathvis,check,it))
                    {
                        check[node]=0;
                        return true;
                    }
                    
                }
                
                else if(pathvis[it])
                {
                    check[node]=0;
                    return true;
                }
                
            }
            check[node]=1;
            pathvis[node]=0;
            return false;
        }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> vis(n,0),pathvis(n,0);
        vector<int> check(n,0);
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            dfs(graph,vis,pathvis,check,i);
        }
        for(int i=0;i<n;i++)
        {
            if(check[i])
            ans.push_back(i);
        }
        return ans;
        
    }
};