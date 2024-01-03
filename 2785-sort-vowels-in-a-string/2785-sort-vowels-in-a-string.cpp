class Solution {
public:
    string sortVowels(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            {
                ans+=s[i];
                s[i]='#';
            }
            
        }
        sort(ans.begin(),ans.end());
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                s[i]=ans[j];
                j++;
            }
        }
        return s;
        
    }
};