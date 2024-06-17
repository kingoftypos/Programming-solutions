class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int r5=0,r10=0,r20=0;
        int n=bills.size();
        for(int i=0;i<n;i++)
        {

            if(r5<0 || r10<0 || r20<0)
            return false;
            if(bills[i]==5)
            r5++;
            else if(bills[i]==10)
            {
                r10++;
                r5--;
            }
            else
            {
                r20++;
                if(r10)
                {r10--;
                r5-=1;
                }
                else
                r5-=3;
            }
            
        }
        if(r5<0 || r10<0 || r20<0)
            return false;
        return true;
        
    }
};