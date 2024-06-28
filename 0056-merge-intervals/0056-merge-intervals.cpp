class Solution {
public:
    static bool comp(vector<int> a,vector<int> b)
    {
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),comp);
        ans.push_back(intervals[0]);
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(ans[j][1]<intervals[i][0])
            {
                ans.push_back(intervals[i]);
                j++;
            }
            else
            {
                ans[j][1]=max(ans[j][1],intervals[i][1]);

            }
        }
        return ans;
        
        
    }
};