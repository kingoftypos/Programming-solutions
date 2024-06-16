class Solution {
public:
    int countCompleteDayPairs(vector<int>& hours) {
        int count=0;
        int n=hours.size();
        for(int i=0;i<n;i++)
        {
            long long sum=hours[i];
            for(int j=i+1;j<n;j++)
            {
               sum+=hours[j] ;
               if(sum%24==0)
               count+=1;
               sum-=hours[j];
            }
        }
        return count;
        
    }
};