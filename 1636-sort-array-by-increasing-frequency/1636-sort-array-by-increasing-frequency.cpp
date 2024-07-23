class Solution {

public:
    static bool comp(const pair<int,int> &a,const pair<int,int> &b)
    {
        if(a.second==b.second)
        return a.first>b.first;
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        vector<pair<int,int>> help(mpp.begin(),mpp.end());
        sort(help.begin(),help.end(),comp);
        vector<int> ans;
        for (auto it : help) {
            for (int i = 0; i < it.second; i++) {
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};