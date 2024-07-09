class Solution {
public:
    int numWaterBottles(int numBot, int numEx) {
        int total=numBot;
        while(numBot>=numEx)
        {
            int rem=numBot/numEx;
            total+=rem;
            numBot=rem+(numBot%numEx);
        }
        return total;
        
    }
};