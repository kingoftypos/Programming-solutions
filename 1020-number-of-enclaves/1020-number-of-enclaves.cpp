class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int cnt=0;
        int n=grid.size();
        int m=grid[0].size();
         vector<vector<int>> vis(n,vector<int>(m,0));
        vector<int> x={-1,0,1,0};
        vector<int> y={0,1,0,-1};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 || j==0 || i==n-1 || j==n-1)
                {
                    if(grid[i][j]==1)
                    {
                    q.push({i,j});
                    vis[i][j]=1;
                    }
                }
            }
        }
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int nrow=row+x[i];
                int ncol=col+y[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1)
                {
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1 && !vis[i][j])
                cnt++;
            }
        }
        return cnt;
        
    }
};