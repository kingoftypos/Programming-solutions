class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<int> x={-1,0,1,0};
        vector<int> y={0,1,0,-1};
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    vis[i][j]=1;
                    q.push({{i,j},0});
                    
                }
               
            }
        }
        while(!q.empty())
        {
            int row=q.front().first.first;
            int col=q.front().first.second;
            int steps=q.front().second;
            q.pop();
           ans[row][col]=steps;
            
            for(int i=0;i<4;i++)
            {
                int nrow=row+x[i];
                int ncol=col+y[i];
                if(nrow>=0 && ncol>=0 &&nrow<n && ncol<m && !vis[nrow][ncol]){
               
                vis[row][col]=1;
                q.push({{nrow,ncol},steps+1});
                }
            }
            
        }
     return ans;   
    }
};