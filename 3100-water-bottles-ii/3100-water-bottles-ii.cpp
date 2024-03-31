class Solution {
public:
    int maxBottlesDrunk(int full, int ex) {
        int ans=full;
        int empty=full;
        full=0;
        while(empty>=ex || full)
        {
            while(empty>=ex)
            {
                empty=empty-ex;
                ex++;
                full++;
            }
            if(full)
            {
                empty+=full;
                ans=ans+full;
                full=0;
            }
        }
        return ans;
        
       
        
    }
};