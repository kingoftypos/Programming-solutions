import java.util.*;
class Solution {
    public int splitArray(int[] nums, int k) {
        int n=nums.length;
        int low=0,high=0;
        for(int i=0;i<n;i++)
        {
            low=Math.max(low,nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            high+=nums[i];
        }
        while(low<=high)
        {
            int mid=(low+high)/2;
            int sub=count(nums,mid);
            if(sub>k)
            low=mid+1;
            else
            high=mid-1;
        }
        return low;

        
    }
    public int count(int[] a,int mid)
    {
        
        int cnt=0;
        int sub=1;
        for(int i=0;i<a.length;i++)
        {
            if(a[i]+cnt<=mid)
            cnt+=a[i];
            else
            {
                sub++;
                cnt=a[i];
            }
        }
        return sub;
    }
}