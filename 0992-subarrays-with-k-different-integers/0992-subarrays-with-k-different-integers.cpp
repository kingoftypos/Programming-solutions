class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int i=0,j=0,ans=0,cnt=0,prefix=0;
        int n=nums.size();
        map<int,int> mpp;
        while(j<n)
        {
            mpp[nums[j]]++;
            cnt=mpp.size();
            while(i<j && (mpp[nums[i]]>1 || cnt>k))
            {
                if(mpp[nums[i]]>1)
                prefix++;
                else
                prefix=0;
                
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0)
                mpp.erase(nums[i]);
                i++;
                cnt=mpp.size();
            }
            if(cnt==k)
            ans+=1+prefix;
            j++;
        }
        return ans;
        
    }
};