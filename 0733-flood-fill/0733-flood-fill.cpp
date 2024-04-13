class Solution {
public:
void dfs(vector<vector<int>>& image, int sr, int sc, int color,int delRow[],int delCol[],vector<vector<int>> &ans, int iniColor)
{
    ans[sr][sc]=color;
    int n=image.size();
    int m=image[0].size();
    for(int i=0;i<4;i++)
    {
        int nrow=sr+delRow[i];
        int ncol=sc+delCol[i];
        if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniColor && ans[nrow][ncol]!=color)
        dfs(image,nrow,ncol,color,delRow,delCol,ans,iniColor);
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor=image[sr][sc];
        vector<vector<int>> ans=image;
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        dfs(image,sr,sc,color,delRow,delCol,ans,iniColor);
        return ans;

        
    }
};