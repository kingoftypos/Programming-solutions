class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int count=0;
        if(ruleKey=="type")
        {
            int j=0;
            for(int i=0;i<items.size();i++)
            {
                if(items[i][j]==ruleValue)
                count++;
            }
        }
        else if(ruleKey=="color")
        {
             int j=1;
            for(int i=0;i<items.size();i++)
            {
                if(items[i][j]==ruleValue)
                count++;
            }
        }
        else
        {
             int j=2;
            for(int i=0;i<items.size();i++)
            {
                if(items[i][j]==ruleValue)
                count++;
            }
        }
        return count;
        
    }
};