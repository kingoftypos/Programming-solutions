class Solution {
    public int totalMoney(int n) {
        int money=0;
        int j=0;
        int monday=1;
    for(int i=1;i<=n;i++)
    {
        j++;
        money+=j;
       if(i%7==0)
       {
           
           j=monday;
           monday++;
       }
       
       

        
    }
   // money+=j;
return money;

    }
}