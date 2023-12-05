import java.util.*;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int n=nums.length;
        int need=0;
        int[] result=new int[2];
        result[0]=-1;
        result[1]=-1;
        HashMap<Integer, Integer> hash=new HashMap<>();
        for(int i=0;i<n;i++)
        {
             need=target-nums[i];
            if(hash.containsKey(need))
            {
                result[0]=hash.get(need);
                result[1]=i;
                return result;
            }
            hash.put(nums[i],i);

        }
        return result;

    }
}