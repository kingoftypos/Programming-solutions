class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans=0;
        stack<int> st;
        int n=heights.size();
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>heights[i])
            {
                int temp=st.top();
                st.pop();
                if(!st.empty())
                {
                    ans=max(ans,heights[temp]*(i-st.top()-1));
                }
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
                {
                    ans=max(ans,heights[temp]*(n-st.top()-1));
                }
                else
                ans=max(ans,heights[temp]*n);
         }
         return ans;
        
        
    }
};