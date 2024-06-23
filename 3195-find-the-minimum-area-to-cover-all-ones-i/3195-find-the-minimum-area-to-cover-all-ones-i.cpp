class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<pair<int,int>> arr;

       
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 1) {
                    arr.push_back(make_pair(i,j));
                    
                }
            }
        }
        if(arr.size()<2)return 1;
        int prevrow=-1,prevcol=-1;
        int row=-1,col=-1;
        for(int i=0;i<arr.size();i++)
        {
            if(prevrow==-1 && prevcol==-1)
            {
                prevrow=arr[i].first;
                row=arr[i].first;
                prevcol=arr[i].second;
                col=arr[i].second;
                
            }
            else
            {
           if(arr[i].first>row || arr[i].second>col)
           {
              prevrow=min(prevrow,arr[i].first);
               prevcol=min(prevcol,arr[i].second);
               row=max(row,arr[i].first);
               col=max(col,arr[i].second);
               
           }
            
            }
            
        }
        
        return (row-prevrow+1)*(col-prevcol+1);

        
    }
};