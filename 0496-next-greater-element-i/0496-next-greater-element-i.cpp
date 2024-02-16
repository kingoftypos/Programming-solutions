class Solution {
public:
    int findgreater(vector<int> &nums2,int j,vector<int> &ans)
    {
        
        for(int i=j;i<nums2.size();i++)
        {
            if(nums2[i]>nums2[j])
            {
                return nums2[i];
            }
            
        }
        return -1;

    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                   ans[i]=findgreater(nums2,j,ans);
                   break;
                }
                
                
            }
            
        }
        return ans;
    }
};