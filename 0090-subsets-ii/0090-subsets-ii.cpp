class Solution {
public:
void help(int i,vector<vector<int>> &ans,vector<int> &temp,vector<int> nums)
        {
            if(i==nums.size())
            {
                if(ans.empty() || ans.back()!=temp)
                ans.push_back(temp);
                return;
            }
            temp.push_back(nums[i]);
            help(i+1,ans,temp,nums);
            temp.pop_back();
            help(i+1,ans,temp,nums);
        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        sort(nums.begin(),nums.end());
        help(0,ans,temp,nums);
        
        return ans;
        
    }
};