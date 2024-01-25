class Solution {
    public:
    void solve(int col,vector<vector<string>> &ans,vector<string> &board,int n,vector<int> &ud,vector<int> &ld,vector<int> &leftr)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if((ud[n-1+col-row]==0) && ld[row+col]==0 && leftr[row]==0)
            {
                board[row][col]='Q';
               ud[n-1+col-row]=1;
               ld[row+col]=1;
               leftr[row]=1;
               solve(col+1,ans,board,n,ud,ld,leftr);
               board[row][col]='.';
               ud[n-1+col-row]=0;
               ld[row+col]=0;
               leftr[row]=0;
            }

        }
    }
public:
    int totalNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        board[i]=s;
        vector<int> ud(2*n-1,0);
        vector<int> ld(2*n-1,0);
        vector<int> leftr(n,0);
        solve(0,ans,board,n,ud,ld,leftr);
       return ans.size();
        
    }
};