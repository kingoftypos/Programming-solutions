class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i=0,j=0;
        int sum=0;
        int count=0,ans=0;
        while(j<nums.size())
        {
            sum += nums[j];
            while(i<j && ( nums[i]==0 || sum>goal))
            {
                if(nums[i]==0)
                count++;
                else
                count=0;
                sum-=nums[i];
                i++;
                
            }
            if(sum==goal)
            ans+=1+count;
            j++;
        }
        return ans;
        
    }
};