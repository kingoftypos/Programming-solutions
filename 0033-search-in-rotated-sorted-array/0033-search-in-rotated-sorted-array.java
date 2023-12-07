class Solution {
    public int search(int[] nums, int target) {
        int n=nums.length;
        int low=0,high=n-1,ans=-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
              ans=mid;
              break;
            }
           
            else if(nums[low]<=nums[mid])
                {
                    if(target>=nums[low]&&nums[mid]>=target)
                    {
                        high=mid-1;
                    }
                    else
                    {
                        low=mid+1;
                    }
                }
            else if(nums[high]>=nums[mid])
                {
 if(target>=nums[mid]&&nums[high]>=target)
                    {
                        low=mid+1;
                    }
                    else
                    {
                        high=mid-1;
                    }

                }
            }
            return ans;
        }
        
    }
