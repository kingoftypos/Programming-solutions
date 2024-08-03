class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        //for rows
        int n=grid.size();
        int m=grid[0].size();
        int rowans=0;
        for(int i=0;i<n;i++)
        {
            int j=0,k=m-1;
            while(j<k)
            {
                if(grid[i][j]!=grid[i][k])
                rowans++;
                j++;
                k--;
            }
        }
        int colans=0;
        for(int i=0;i<m;i++)
        {
            int j=0,k=n-1;
            while(j<k)
            {
                if(grid[j][i]!=grid[k][i])
                colans++;
                j++;
                k--;
            }
        }
        return min(rowans,colans);
        
    }
};