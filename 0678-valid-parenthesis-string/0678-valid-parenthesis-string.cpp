class Solution {
public:
    bool checkValidString(string s) {
        int count=0,star=0;
        bool flag1=0,flag2=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            count++;
            else if(s[i]==')')
            count--;
            else
            star++;
            
        }
        if(!count || !(count+star) || !(count-star))
        flag1=1;
        int count1=0,star1=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==')')
            count1++;
            else if(s[i]=='(')
            count1--;
            else
            star1++;
            
        }
        if(!count1 || !(count1+star1) || !(count1-star1))
        flag2=1;
        if(flag1 || flag2)
        return true;
        else
        return false;

        
    }
};