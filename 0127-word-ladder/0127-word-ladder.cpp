class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> st(wordList.begin(),wordList.end());
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        int ans=0;
        st.erase(beginWord);
        while(!q.empty())
        {
            string s=q.front().first;
            int level=q.front().second;

            q.pop();
            if(s==endWord)return level;
            for(int i=0;i<s.size();i++)
            {
                char og=s[i];
                for(char ch='a';ch<='z';ch++)
                {
                    s[i]=ch;
                    if(st.find(s)!=st.end())
                    {
                        st.erase(s);
                        q.push({s,level+1});
                    }
                }
                s[i]=og;
            }
          


        }
        return 0;
       

    }
};