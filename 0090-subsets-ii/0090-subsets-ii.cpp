class Solution {
    public:
    void solve(vector<int> &temp,vector<vector<int>> &ans,vector<int> &nums,int index)
    {
        ans.push_back(temp);
        for(int i=index;i<nums.size();i++)
        {
            if(i>index && nums[i-1]==nums[i]) continue;
            temp.push_back(nums[i]);
            solve(temp,ans,nums,i+1);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        solve(temp,ans,nums,0);
        return ans;
    }
};