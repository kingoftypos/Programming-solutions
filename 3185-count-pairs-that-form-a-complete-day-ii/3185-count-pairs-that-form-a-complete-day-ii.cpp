class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int,int> mpp;
        int n=hours.size();
        long long cnt=0;
        for(int i=0;i<n;i++)
        {
            int rem=hours[i]%24;
            if(rem && mpp.find(24-rem)!=mpp.end())
            {
                cnt+=mpp[24-rem];
                mpp[rem]++;
            }
            else if(!rem && mpp.find(rem)!=mpp.end())
            {
                cnt+=mpp[rem];
                mpp[rem]++;
            }
            else
            {
                mpp[rem]++;
            }
        }
        return cnt;
    }
};