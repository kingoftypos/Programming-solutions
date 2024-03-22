class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0,j=0,ans=0,cnt=0,odd=0;
        while(j<nums.size())
        {
            if(nums[j]%2)
            odd++;
            while(i<j && ((nums[i]%2==0) || odd>k))
            {
                if(nums[i]%2==0)
                {
                    cnt++;
                }
                else
                {
                    cnt=0;
                    odd--;
                }
                i++;
            }
            if(odd==k)
            ans+=1+cnt;

            j++;
        }
        return ans;
        
        
    }
};