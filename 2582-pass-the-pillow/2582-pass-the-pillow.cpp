class Solution {
public:
    int passThePillow(int n, int time) {
        vector<int> temp;
        for(int i=1;i<=n;i++)
        temp.push_back(i);
        int index=0;
        bool flag=0;  //0 forward 1 backward
        while(time)
        {
            if(!flag)
            {
                index++;
            }
            else
            index--;

            time--;
            if(index==n-1 || index==0)
                flag=!flag;
        }
        return temp[index];
        
    }
};