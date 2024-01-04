class Solution {
public:
    string reverseWords(string s) {
        vector<string> arr;
        string temp="",ans="";
        reverse(s.begin(),s.end());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                temp+=s[i];
            }
            else
            {
                if(!temp.empty())
               { reverse(temp.begin(),temp.end());
                arr.push_back(temp);
                temp="";
               }
            }
        }
        if(!temp.empty())
        {
         reverse(temp.begin(),temp.end());
                arr.push_back(temp);}
                int i=0;
        for(;i<arr.size()-1;i++)
        {
           ans+=arr[i]+' ';
        }
        ans+=arr[i];
        return ans;


        
    }
};