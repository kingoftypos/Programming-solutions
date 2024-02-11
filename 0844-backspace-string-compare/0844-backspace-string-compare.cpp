class Solution {
public:
    bool backspaceCompare(string s, string t) {
       string temp1="",temp2="";
       for(int i=0;i<s.size();i++)
       {
           if(temp1=="" && s[i]=='#')
           continue;
           else if(temp1!="" && s[i]=='#')
           {
               temp1.pop_back();
           }
           else
           temp1.push_back(s[i]);
           

       }
       for(int i=0;i<t.size();i++)
       {
           if(temp2=="" && t[i]=='#')
           continue;
           else if(temp2!="" && t[i]=='#')
           {
               temp2.pop_back();
           }
           else
           temp2.push_back(t[i]);
           

       }
       if(temp1==temp2)
       return 1;
       else
       return 0;
        
    }
};