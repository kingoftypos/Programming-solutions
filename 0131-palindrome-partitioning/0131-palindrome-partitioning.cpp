class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        solve(0,ans,temp,s);
        return ans;
        
    }
    void solve(int index,vector<vector<string>> &ans,vector<string> &temp,string &s)
    {
        if(index==s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
            if(ispossible(s,index,i))
            {
                temp.push_back(s.substr(index,i-index+1));
                solve(i+1,ans,temp,s);
                temp.pop_back();
            }
        }
    }
    bool ispossible(string &s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            return false;
            
        }
        return true;
    }
};