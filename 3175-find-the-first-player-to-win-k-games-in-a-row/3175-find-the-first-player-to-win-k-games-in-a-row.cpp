class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
         deque<int> q;
        int n = skills.size();
        for (int i = 0; i < n; ++i)
            q.push_back(i); 
        
        int count = 0;
        int prevWinner = -1;
        
        while (q.size()>1) {
            int first = q.front();
            q.pop_front();
            int second = q.front();
            q.pop_front();
            
            if (skills[first] > skills[second]) {
                q.push_back(second); 
                q.push_front(first);
                if (first == prevWinner) {
                    count++; 
                } else {
                    count = 1; 
                }
                prevWinner = first;
            } else {
                q.push_back(first); 
                q.push_front(second);
                if (second == prevWinner) {
                    count++; 
                } else {
                    count = 1; 
                }
                prevWinner = second;
            }
            
            if (count == k|| count>=n-1) {
                return prevWinner; 
            }
        }
        return prevWinner;
        
    }
};