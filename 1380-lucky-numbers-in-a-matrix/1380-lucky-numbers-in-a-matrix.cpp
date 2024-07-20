class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=0;
        vector<int> ans;
        while(j!=n)
        {
            int mini=INT_MAX;
            int index=-1;
            for(int k=0;k<m;k++)
            {
                if(mini>matrix[j][k])
                {
                    mini=matrix[j][k];
                    index=k;
                }
            }
            while(i<n)
            {
                if(mini>=matrix[i][index])
                i++;
                else
                break;
            }
            
            if(i==n)
            {
                ans.push_back(mini);
            }
            i=0;
            j++;

        }
        return ans;
        
    }
};