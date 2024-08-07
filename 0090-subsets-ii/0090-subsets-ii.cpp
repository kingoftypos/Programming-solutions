class Solution {
public:
void help(int i,set<vector<int>> &st,vector<int> &temp,vector<int> nums)
        {
            if(i==nums.size())
            {
                st.insert(temp);
                return;
            }
            temp.push_back(nums[i]);
            help(i+1,st,temp,nums);
            temp.pop_back();
            help(i+1,st,temp,nums);
        }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        help(0,st,temp,nums);
        for(auto it: st)
        ans.push_back(it);
        return ans;
        
    }
};