class Solution {
public:
void dfs(vector<vector<int>> &vis,vector<vector<char>>& board,vector<int> &x,vector<int> &y,int row,int col)
{
    vis[row][col]=1;
    int n=board.size();
        int m=board[0].size();

        for(int i=0;i<4;i++)
        {
            int nrow=row+x[i];
            int ncol=col+y[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && board[nrow][ncol]=='O')
            {
                dfs(vis,board,x,y,nrow,ncol);
            }
        }
}
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<int> x={-1,0,1,0};
        vector<int> y={0,1,0,-1};
        for(int i=0;i<m;i++)
        {
            if(board[0][i]=='O' && !vis[0][i])
            dfs(vis,board,x,y,0,i);
            if(board[n-1][i]=='O' && !vis[n-1][i])
            dfs(vis,board,x,y,n-1,i);
        }
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O' && !vis[i][0])
            dfs(vis,board,x,y,i,0);
            if(board[i][m-1]=='O' && !vis[i][m-1])
            dfs(vis,board,x,y,i,m-1);
        }


        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                    if(!vis[i][j] && board[i][j]=='O')
                    board[i][j]='X';
            }
        }

    }
};