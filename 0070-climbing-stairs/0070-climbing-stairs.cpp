class Solution {
public:
    int climbStairs(int n) {
        int first=1,second=2,ans=0;
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            ans=first;
            else if(i==2)
            ans=second;
            else
            {
                ans=first+second;
                first=second;
                second=ans;
            }


        }
        return ans;
        
    }
};