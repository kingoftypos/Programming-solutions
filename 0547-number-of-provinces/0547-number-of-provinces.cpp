class Solution {
public:
    int findCircleNum(vector<vector<int>>& ic) {
        int count=0;
        vector<int> vis(ic.size(),0);
        queue<int> q;
        for(int i=0;i<ic.size();++i)
        {
            if(!vis[i])
            {
                q.push(i);
                vis[i]=1;
                count++;
                while(!q.empty())
                {
                    int num=q.front();
                    q.pop();
                    for(int j=0;j<ic.size();++j)
                    {
                        if(ic[num][j] && !vis[j])
                        {
                            vis[j]=1;
                            q.push(j);
                        }
                    }
                }
            }
        }
        return count;
        
    }
};