class Solution {
    public:
    void solve(int num, int &count)
    {
        if(num==0)
        return;
        else if(num%2==0)
        {
            solve(num/2,count);
        }
        else
        {
            solve(num-1,count);
        }
        count++;

    }
public:
    int numberOfSteps(int num) {
        int count=0;
        solve(num,count);
        return count;

        
        
    }
};