class Solution {
public:
    bool judgeCircle(string moves) {
        int horizontal=0;
        int vertical=0;
        for(auto i:moves)
        {
            if(i=='R')
            horizontal++;
            else if(i=='L')
            horizontal--;
            else if(i=='U')
            vertical++;
            else
            vertical--;
        }
        if(!vertical && !horizontal)
        return true;
        else
        return false;
        
    }
};