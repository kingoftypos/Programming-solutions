class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int i=0,j=0;
        int cost=0;
        int n=s.size();
        int ans=0;
        while(i<=j && j<n)
        {
            cost+=abs(s[j]-t[j]);
            while(i<j && cost>maxCost)
            {
                cost-=abs(s[i]-t[i]);
                i++;

            }
            ans=max(ans,j-i+1);
            j++;

        }
        return ans;
        
    }
};