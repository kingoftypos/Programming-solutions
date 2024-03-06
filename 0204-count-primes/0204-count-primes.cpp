class Solution {
public:
    int countPrimes(int n) {
        if(n==0)return 0;
        vector<bool> table(n,true);
        table[0]=table[1]=false;
        int ans=0;
        for(int i=2;i<n;i++)
        {
            if(table[i])
            {
            ans++;
            int j=2*i;
            while(j<n)
            {
                table[j]=false;
                j+=i;
            }
            }
        }
        return ans;
        
    }
};