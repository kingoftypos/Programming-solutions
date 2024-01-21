class Solution {
    public:
    void solve(vector<int> &arr,int target,vector<vector<int>> &ans,vector<int> &temp,int index)
    {
        if(index==arr.size())
        {
            if(target==0)
            ans.push_back(temp);
            return;
        }
        if(arr[index]<=target)
        {
            temp.push_back(arr[index]);
            solve(arr,target-arr[index],ans,temp,index);
            temp.pop_back();
        }
        solve(arr,target,ans,temp,index+1);
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates,target,ans,temp,0);
        return ans;
    }
};