class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            
            if(isalpha(s[i]))
            ans++;
            else if(!ans)
            continue;
            else
            break;

        }
        return ans;

    }
};