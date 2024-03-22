class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int i=0,j=0,ans=0,cnt=0;
        map<char,int> mpp;
        while(j<n)
        {
            mpp[s[j]]++;
            while(i<j && mpp.size()==3 && mpp[s[i]]>1)
            {
                mpp[s[i]]--;
                cnt++;
                i++;

            }
            if(mpp.size()==3)
            ans+=1+cnt;
            j++;
        }
        return ans;
    }
};