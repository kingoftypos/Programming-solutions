class Solution {
public:
    string sortSentence(string s) {
        string temp="",result="";
        vector<string> ans(10);
        int i=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
           int pos=s[i-1]-'0';
           temp.pop_back();
           ans[pos]=temp;
           temp.clear();
        }
        else
        {
            temp+=s[i];
        }
    }
    int pos=s[i-1]-'0';
           temp.pop_back();
           ans[pos]=temp;
           temp.clear();
           for(i=0;i<ans.size();i++)
           {
              if (!ans[i].empty()) {
               result+=ans[i];
               result+= " ";
              }
           }
           result.pop_back();
           return result;
    }

};