class Solution {
public:
    int appendCharacters(string s, string t) {
        int x=0,y=0;
        //int ans=0;
        while(x<s.size() && y<t.size())
        {
            
            if(s[x]==t[y])
            y++;
            x++;

        }
        return t.size()-y;
        
    }
};