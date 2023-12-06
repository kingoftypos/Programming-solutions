class Solution {
    public int searchInsert(int[] nums, int target) {
        int n=nums.length;
        int start=0,end=n-1,ans=n;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]>=target)
            {
                ans=mid;
                end=mid-1;
            }
            else
            start=mid+1;
        }
        return ans;
        
        
    }
}