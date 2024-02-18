class Solution {
public:
        int Rectangle(vector<int> &heights)
        {
            stack<int> st;
            int ans=0;
            int n=heights.size();
            for(int i=0;i<n;i++)
            {
                while(!st.empty() && heights[st.top()]>heights[i])
                {
                int temp=st.top();
                st.pop();
                if(!st.empty())
                ans=max(ans,heights[temp]*(i-st.top()-1));
                else
                ans=max(ans,heights[temp]*i);
                }
                st.push(i);
            }
            while(!st.empty())
            {
                int temp=st.top();
                st.pop();
                if(!st.empty())
                ans=max(ans,heights[temp]*(n-st.top()-1));
                else
                ans=max(ans,heights[temp]*n);
            }
            return ans;


        }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int ans=0;
        int col=matrix[0].size();
        vector<int> heights(col,0);
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(matrix[i][j]=='0')
                heights[j]=0;
                else
                heights[j]++;
            }
            ans=max(ans,Rectangle(heights));
        }
        return ans;
        
    }
};