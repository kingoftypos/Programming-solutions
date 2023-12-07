class Solution {
    public int findMin(int[] arr) {
        int n=arr.length;
        int low=0,high=n-1,ans=Integer.MAX_VALUE;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[low]<=arr[high])
            {
                ans=Math.min(ans,arr[low]);
                break;
            }
            if(arr[low]<=arr[mid])
            {
                ans=Math.min(arr[low],ans);
                low=mid+1;
                
            }
            else if(arr[mid]<=arr[high])
            {
                ans=Math.min(arr[mid],arr[high]);
                high=mid-1;

            }
        }
        return ans;
        
    }
}