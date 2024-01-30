class Solution {
    int m,n;
    vector<vector<int>> dir={{1,0},{-1,0},{0,1},{0,-1}};
    bool find(vector<vector<char>> &board,string &word,int i, int j,int index)
    {
        if(index==word.size())
        return true;
        if(i<0 || j<0 || i>=m || j>=n || board[i][j]!= word[index] || (board[i][j]=='.'))
        return false;
        
        char temp=board[i][j];
        board[i][j]='.';

        for(auto &it:dir)
        {
            int new_i=i+it[0];
            int new_j=j+it[1];
            if(find(board,word,new_i,new_j,index+1))
            return true;
        }
        board[i][j]=temp;
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        n=board[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]==word[0] && find(board,word,i,j,0))
                return true;
            }
            
        }
        return false;

        
    }
};