class Solution {
public:
    static bool comp(vector<int> a,vector<int> b)
    {
        return a[0]<b[0];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int ans=0;
        sort(intervals.begin(),intervals.end(),comp);
        int n=intervals.size();
        int prev_end=intervals[0][1];
        int cnt1=0;
        for(int i=1;i<n;i++)
        {
            if(prev_end>intervals[i][0])
            {
            cnt1++;
            prev_end=min(prev_end,intervals[i][1]);
            }
            else
            prev_end=intervals[i][1];
        }
        return cnt1;
        
    }
};