class Solution {
    public:
    void solve(vector<vector<int>> &ans,vector<int> &temp,int index,int k,int target)
    {
        if(k==0 && target==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<=9;i++)
        {
            temp.push_back(i);
        solve(ans,temp,i+1,k-1,target-i);
        temp.pop_back();

        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans,temp,1,k,n);
        return ans;

        
    }
};