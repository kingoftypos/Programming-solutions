class Solution {
    public int[] searchRange(int[] nums, int target) {
int ans[]=new int[2];
ans[0]=lb(nums,target);
if(ans[0]==-1)
ans[1]=-1;
else
ans[1]=ub(nums,target);
return ans;
        
    }
    public int lb(int[] arr,int target)
    {
        int n=arr.length;
        int low=0,high=n-1,ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==target)
            {
                ans=mid;
                high=mid-1;
            }
            else if(arr[mid]>target)
                high=mid-1;
            else
                low=mid+1;

        }
        return ans;
    }
    public int ub(int[] arr,int target)
    {
        int n=arr.length;
        int low=0,high=n-1,ans=n;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]>target)
            {
                ans=mid;
                high=mid-1;
            }
            
            else
                low=mid+1;;

        }
        return ans-1;
    }
}