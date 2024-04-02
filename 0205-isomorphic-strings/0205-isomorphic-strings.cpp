class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> mpp;
        int m=s.size();
        int n=t.size();
        if(m!=n) return false;
        for(int i=0;i<m;i++)
        {
            if(mpp.find(s[i])==mpp.end())
            {
                for(const auto &it:mpp)
                {
                    if(it.second==t[i])
                    return false;
                }
                mpp[s[i]]=t[i];

            }
            else if(mpp[s[i]]==t[i])
            {
                continue;
            }
            else
            return false;
        }
        return true;
    }
        
};