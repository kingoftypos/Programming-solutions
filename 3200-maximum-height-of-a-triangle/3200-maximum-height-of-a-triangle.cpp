class Solution {
public:
    int maxHeightOfTriangle(int red, int blue) {
        bool flag =0; //0--> red 1-->blue
        int r=red,b=blue;
        int curr0=0,curr1=0;
        int level=0;
        while(r>=0 && b>=0)
        {
            level++;
            if(!flag)
            r-=level;
            else
            b-=level;
            flag=!flag;
        }
        curr0=(r<0 || b<0 )?level-1:level;
        level=0;
        flag=1;
        r=red;
        b=blue;
        while(r>=0 && b>=0)
        {
            level++;
            if(!flag)
            r-=level;
            else
            b-=level;
            flag=!flag;
        }
        curr1=(r<0 || b<0 )?level-1:level;
        return max(curr0,curr1);


        
    }
};