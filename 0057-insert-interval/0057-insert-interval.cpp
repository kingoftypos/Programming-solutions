class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newIntervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
        int i=0;
        while(i<n && intervals[i][1]<newIntervals[0])
        {
            ans.push_back(intervals[i]);
            i++;
        }
        while(i<n && intervals[i][0]<=newIntervals[1])
        {
            newIntervals[0]=min(intervals[i][0],newIntervals[0]);
            newIntervals[1]=max(intervals[i][1],newIntervals[1]);
            i++;
        }
        ans.push_back(newIntervals);
        while(i<n)
        {
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
    
};