class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>> count(n,vector<int>(11,0));
        set<int> st;

        for(int i=0;i<pick.size();i++)
        {
            int player=pick[i][0];
            int ball=pick[i][1];
            count[player][ball]++;
            if(count[player][ball]>player) 
            st.insert(player);
        }
        return st.size();
        
        
        
    }
};