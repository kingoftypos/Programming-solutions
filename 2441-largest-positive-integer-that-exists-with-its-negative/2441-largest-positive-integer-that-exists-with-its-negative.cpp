class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int ans=-1;
        while(i<j)
        {
            int val=-1*nums[i];
            int val2=nums[j];
            if(val==val2)
            {
            ans=val2;
            break;
            }
            else if(val<val2)
            j--;
            else
            i++;
        }
        return ans;
        
    }
};