class Solution {
public:
    void helper(int n, string s,vector<string> &ans) {
        if (n == 0) {
            ans.push_back(s);
            return;
        }
        if (s.length()==0||s.back()!='0')
            helper(n - 1, s + '0',ans);
        helper(n - 1, s + '1',ans);
    }
    vector<string> validStrings(int n) {
        
        string s="";
        vector<string> ans;
        helper(n,s,ans);
        return ans;
        
    }
};