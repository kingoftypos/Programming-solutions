class Solution {
    public int longestConsecutive(int[] nums) {
        int n=nums.length;
        int longest=0;
        Set<Integer> set=new HashSet<>();
        for(int i=0;i<n;i++)
        {
            set.add(nums[i]);
        }
        for(int it:set)
        {
            if(!set.contains(it-1))
            {
                int count=1;
                int x=it;
                while(set.contains(x+1))
                {
                    count++;
                    x++;
                }
                longest=Math.max(count,longest);
            }
        }
        return longest;
        
    }
        
    }