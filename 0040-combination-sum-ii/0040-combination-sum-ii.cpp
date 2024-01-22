class Solution {
    public:
    void solve(vector<int> &arr,int target,int index,vector<vector<int>> &ans,vector<int> &temp)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<arr.size();i++)
        {
            if(i>index && arr[i]==arr[i-1])continue;
            if(target<arr[i])break;
            temp.push_back(arr[i]);
            solve(arr,target-arr[i],i+1,ans,temp);
            temp.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(),candidates.end());
       vector<vector<int>> ans;
       vector<int> temp;
       solve(candidates,target,0,ans,temp);
       return ans;
    }
};