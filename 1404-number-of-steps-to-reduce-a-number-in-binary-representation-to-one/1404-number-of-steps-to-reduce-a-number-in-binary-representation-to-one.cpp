class Solution {
public:
    int numSteps(string s) {
        int steps=0;
        int carry=0;
        int i=s.size()-1;
        while(i>0)
        {
            int num=((s[i]-'0')+carry)%2;
            if(num)
            {
                carry=((s[i]-'0')+carry)/2+1;
                steps++;
            }
            steps++;
            i--;




        }
        
        return steps+carry;
        
        
    }
};