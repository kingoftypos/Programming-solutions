class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
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