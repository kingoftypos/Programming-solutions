class Solution {
    public boolean check(int[] nums) {
        int n=nums.length;
        int count=0;
        int x=-1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<=nums[i+1])
            count++;
            else
            {
                x=i;
            }
        }
        if(count==n-1)
        return true;
        else if(count<n-2)
        return false;
        else if(nums[0]>=nums[n-1])
        return true;
        else 
        return false;
            
        
       
    }
}