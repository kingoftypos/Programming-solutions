class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans=0,sum=0;
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int csum=sum-goal;
            if(mpp.find(csum)!=mpp.end())
            {
                ans+=mpp[csum];
            }
            mpp[sum]++;
        }
        return ans;
        
    }
};