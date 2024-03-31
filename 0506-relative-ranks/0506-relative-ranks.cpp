#include <vector>
#include <string>
#include <queue>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans(score.size());
        priority_queue<int> pq;
        unordered_map<int, int> mpp;
        
        for (int i = 0; i < score.size(); ++i) {
            pq.push(score[i]);
            mpp[score[i]] = i;
        }
        
        int i = 0;
        while (!pq.empty()) {
            int temp = pq.top();
            pq.pop();
            if (i == 0) {
                ans[mpp[temp]] = "Gold Medal";
            } else if (i == 1) {
                ans[mpp[temp]] = "Silver Medal";
            } else if (i == 2) {
                ans[mpp[temp]] = "Bronze Medal";
            } else {
                ans[mpp[temp]] = to_string(i + 1);
            }
            i++;
        }
        return ans;
    }
};
