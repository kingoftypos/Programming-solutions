class Solution {
    public int smallestDivisor(int[] nums, int threshold) {
        int n=nums.length;
        int low=1,high=Integer.MIN_VALUE;
        for(int i=0;i<n;i++)
        {
            high=Math.max(nums[i],high);
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(calc(nums,mid,threshold))
            high=mid-1;
            else
            low=mid+1;
        }
        return low;
        
    }
    public boolean calc(int[] arr,int mid,int limit)
    {
        int ans=0;
        for(int i=0;i<arr.length;i++)
        {
            ans+=Math.ceil((float)arr[i]/(float)mid);
        }
        return ans<=limit;
    }
}