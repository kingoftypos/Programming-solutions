class Solution {
public:
    int longestPalindrome(string s) {
        int length=0;
        vector<int> low(26,0),upp(26,0);
        bool odd=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='a')
            {
                low[s[i]-'a']++;
            }
            else
            {
                upp[s[i]-'A']++;
            }
        }
        for(int i=0;i<low.size();i++)
        {
           if(low[i]%2==0) 
           {
               length+=low[i];
           }
           else
           {
               length+=low[i]-1;
               odd=1;
           }
        }
         for(int i=0;i<upp.size();i++)
        {
           if(upp[i]%2==0) 
           {
               length+=upp[i];
           }
           else
           {
               length+=upp[i]-1;
               odd=1;
           }
        }
        if(odd)
        length+=1;
        return length;


        
    }
};