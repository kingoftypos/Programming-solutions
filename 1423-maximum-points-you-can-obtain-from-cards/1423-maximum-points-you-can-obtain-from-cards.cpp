class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int n=cardPoints.size();
       int j=n-1,i=k-1,sum=0,ans=0;
       for(int t=0;t<k;t++)
       {
        sum+=cardPoints[t];
       }
       ans=sum;
       while(i>=0 && i<j)
       {
        sum-=cardPoints[i];
        sum+=cardPoints[j];
        i--;
        j--;
        ans=max(ans,sum);
       }
       return ans;
        
    }
};