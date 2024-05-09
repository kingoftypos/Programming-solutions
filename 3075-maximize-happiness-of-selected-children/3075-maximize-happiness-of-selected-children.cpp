class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        long long sum=0;
        int n=happiness.size()-1;
        int turn=0;
        while(k--)
        {
            int val=happiness[n]-turn;
            if(val>=0)
            sum+=happiness[n]-turn;
            else
            break;
            turn++;
            n--;

        }
        return sum;
        
    }
};