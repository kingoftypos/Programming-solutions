class Solution {
public:
    string minRemoveToMakeValid(string s) {
        long long count=0;
    string ans="",ans1="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        count++;
        if(s[i]==')')
        count--;
        if(count<0 && s[i]==')')
        {
            count++;
        continue;
        }
        ans+=s[i];
    }
    if(count>0)
    {
       long long count1=0;
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(ans[i]==')')
        count1++;
        if(ans[i]=='(')
        count1--;
        if(count1<0 && ans[i]=='(')
        {
            count1++;
        continue;
        }
        ans1+=ans[i];
        }
        reverse(ans1.begin(),ans1.end());
        
        
    }
    else
    ans1=ans;
    return ans1;
    }
};