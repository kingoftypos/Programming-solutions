class Solution {
public:
    string largestOddNumber(string num) {
        int second=0;
        string ans="";
        bool exist=0;
        int j=num.size()-1;
        for(;j>=0;j--)
        {
            if((num[j]-'0')%2!=0)
            {
                exist=1;
              second=j; 
              break; 
            }
        }
       if(!exist&&second==0)
       return ans;
        for(int i=0;i<=second;i++)
        {
            ans+=num[i];
        }
        return ans;
        
    }
};