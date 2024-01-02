class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        
   string s1=strs[0];
   string s2=strs[n-1];
   string ans="";
   int i=0,j=0;
   while(i<s1.size()&&j<s2.size())
   {
       if(s1[i]==s2[j])
       {
           ans.push_back(s1[i]);
           i++;
           j++;
       }
       else
       {
           break;
       }
   }
   
   return ans;
        
    }
};