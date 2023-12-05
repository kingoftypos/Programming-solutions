class Solution {
    public int maxProfit(int[] prices) {
        int n=prices.length;
        int cost,max=0,min=prices[0];
        for(int i=1;i<n;i++)
        {
            cost=prices[i]-min;
            max=Math.max(max,cost);
            min=Math.min(prices[i],min);
            
        }
        return max;
        
    }
}