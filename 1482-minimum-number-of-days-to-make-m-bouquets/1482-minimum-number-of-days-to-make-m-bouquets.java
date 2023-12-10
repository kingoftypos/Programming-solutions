import java.util.*;
class Solution {
    public int minDays(int[] arr, int m, int k) {
        int n=arr.length;
        long val=(long)m*(long)k;
        if(val>n) return -1;
        int min=Integer.MAX_VALUE,max=Integer.MIN_VALUE;
       
        for(int i=0;i<n;i++)
        {
            min=Math.min(min,arr[i]);
            max=Math.max(max,arr[i]);
        }
         int low=min,high=max;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(possible(arr,mid,m,k))
            high=mid-1;
            else
            low=mid+1;
        }
        return low;
        
        
    }
    public static boolean possible(int[]arr,int mid, int m, int k)
    {
        int cnt=0;
        int bq=0;
        int n=arr.length;
        for(int i=0;i<n;i++)
        {
            if(mid>=arr[i])
            {
                cnt++;
            }
            else
            {
               bq+=(cnt/k);
               cnt=0;
            }
        }
        bq+=(cnt/k);
        return bq>=m;
    }
    
        
    }
