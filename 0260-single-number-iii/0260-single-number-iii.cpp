class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int a=0,b=0;
        long long x=0;
        for(int i=0;i<nums.size();i++)
        {
            x^=nums[i];
        }
        long long mask=(x) & (-x);
        for(int i=0;i<nums.size();i++)
        {
            if(mask & nums[i])
            a^=nums[i];
            else
            b^=nums[i];
        }
        return {a,b};
        
    }
};