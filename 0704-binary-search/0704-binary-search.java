class Solution {
    public int search(int[] nums, int target) {
        int n=nums.length;
        int start=0,end=n-1;
        int mid=start+(end-start)/2;
        while(start<=end)
        {
            if(target>nums[mid])
            {
                start=mid+1;
            }
            else if(target<nums[mid])
            {
                end=mid-1;
            }
            else
            return mid;
            mid=start+(end-start)/2;
        }
        return -1;
    }
}