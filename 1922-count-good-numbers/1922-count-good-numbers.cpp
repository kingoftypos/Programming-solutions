class Solution {
    int mod=1e9+7;
   long long power(long long n,long long y)
   {
        if(y==0)return 1;
        long long ans=power(n,y/2);
        ans*=ans;
        ans%=mod;
        if(y%2)
        {ans*=n;
        ans%=mod;
        }
        return ans;
   }

public:
    int countGoodNumbers(long long n) {
        long long even=n/2 + n%2;
        long long odd =n/2;
        return (power(5,even)*power(4,odd))%mod;
        
    }
};
