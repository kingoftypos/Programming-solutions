class Solution {
    public:
    void solve(int n,vector<string> &ans,int open,int close,string str)
    {
        if(open+close == 2*n)
        {
            ans.push_back(str);
            return;
        }
        if(open<n)solve(n,ans,open+1,close,str+"(");
        if(close<open)solve(n,ans,open,close+1,str+")");

        
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n,ans,0,0,"");
        return ans;
        
    }
};