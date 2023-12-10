class Solution {
    public int minEatingSpeed(int[] arr, int h) {

        int n=arr.length;
        int max=Integer.MIN_VALUE;
        for(int i=0;i<n;i++)
        {
            max=Math.max(arr[i],max);
        }
        int low=1,high=max;
        while(low<=high)
        {
            int mid=(low+high)/2;
            int totalh=calc(arr,mid);
            if(totalh<=h)
            high=mid-1;
            else
            low=mid+1;

        }
        return low;
    }
    public int calc(int[] arr, int  mid)
    {
        int ans=0;
        for(int i=0;i<arr.length;i++)
        {
            ans+=Math.ceil((double)arr[i]/(double)mid);
        }
        return ans;
    }
}