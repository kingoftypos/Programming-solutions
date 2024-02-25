class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        int ans = 0;
        queue<int> q;
        for (int i = 0; i < n; i++)
            q.push(i);
        while (tickets[k] != 0) {
            tickets[q.front()]--;
            if (tickets[q.front()])
                q.push(q.front());
            q.pop();
            ans++;
        }
        return ans;
    }
};