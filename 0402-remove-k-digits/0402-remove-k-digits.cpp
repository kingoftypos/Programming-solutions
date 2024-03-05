class Solution {
public:
    string removeKdigits(string num, int k) {
        
        if(k>=num.size()) return "0";

        stack<char> st;
        for(int i=0;i<num.size();i++)
        {
            if(st.empty())st.push(num[i]);
            else
            {
                while(!st.empty() && st.top()>num[i] && k>0)
                {
                    st.pop();
                    k--;

                }
                st.push(num[i]);
            }
        }
        while(k>0)
        {
            st.pop();
            k--;
        }
        if(st.empty())return "0";
        
        string ans="";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int j=0;
        while(ans[j]=='0')
        j++;
        return (ans.substr(j)=="") ? "0":ans.substr(j);



        
    }
};