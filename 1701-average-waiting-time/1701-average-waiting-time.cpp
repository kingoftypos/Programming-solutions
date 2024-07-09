class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n=customers.size();
        int curr_time=customers[0][0];
        int finish_time=customers[0][0]+customers[0][1];
        double ans=finish_time-curr_time;
        for(int i=1;i<n;i++)
        {
        curr_time=max(customers[i][0],finish_time);
        finish_time=curr_time+customers[i][1];
        ans+=finish_time-customers[i][0];
        }
        ans=ans/n;
        return ans;

        
    }
};