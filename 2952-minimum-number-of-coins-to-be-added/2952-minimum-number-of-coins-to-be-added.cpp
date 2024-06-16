class Solution {
public:
    int minimumAddedCoins(vector<int>& nums, int n) {
        sort(nums.begin(),nums.end());
        int ans=0;
        long long maxVal=0;
        int i=0;
        while(maxVal<n)
        {
            if(i<nums.size() && nums[i]<=maxVal+1)
            {
                maxVal+=nums[i];
                i++;
            }
            else
            {
                
                maxVal+=(maxVal+1);
                ans++;
            }
        }
        return ans;
        
    }
};