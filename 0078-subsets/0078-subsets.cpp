class Solution {
    public:
    void getsub(vector<int> &nums,int i,vector<vector<int>> &ans,vector<int> a)
    {
      if(nums.size()==i)  
      {
          ans.push_back(a);
          return;
      }
      getsub(nums,i+1,ans,a);
      a.push_back(nums[i]);
      getsub(nums,i+1,ans,a);
      a.pop_back();
      return;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> a;
        getsub(nums,0,ans,a);
        return ans;
    }
};