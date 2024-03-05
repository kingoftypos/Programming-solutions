class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            long long mini=nums[i];
            long long maxi=nums[i];
            for(int j=i;j<n;j++)
            {
                if(nums[j]<mini)
                mini=nums[j];
                if(nums[j]>maxi)
                maxi=nums[j];
                ans+=maxi-mini;
            }
        }
        return ans;
        
    }
};