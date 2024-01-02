class Solution {
public:
    bool isAnagram(string s, string t) {
         int n1=s.length();
    int n2=t.length();
    unordered_map<int,int> mpp;
    if(n1!=n2)return false;
    for(int i=0;i<n1;i++)
    {
       
        mpp[s[i]-'a']++;
        mpp[t[i]-'a']--;
    }
    for(auto& it:mpp)
    {
        if(it.second !=0)
        {
            return false;
        }
    }
    return true;
        
    }
};