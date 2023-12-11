class Solution {
    public int shipWithinDays(int[] weights, int days) {
        int n= weights.length;
        int low=Integer.MIN_VALUE,high=0;
        for(int i=0;i<n;i++)
        {
            low=Math.max(weights[i],low);
            high+=weights[i];
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(totaldays(weights,mid)<=days)
            high=mid-1;
            else
            low=mid+1;
        }
        return low;
        
    }
    public int totaldays(int[] arr,int mid)
    {
        int load=0;
        int days=1;
        for(int i=0;i<arr.length;i++)
        {
            if(load+arr[i]>mid)
            {
                days++;
                load=arr[i];
            }
            else
            load+=arr[i];
        }
        return days;
    }
}