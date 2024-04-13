
class Solution {
  static bool compareFirstValue(vector<int>& a, vector<int>& b) {
        return a[0] < b[0];
    }
    public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {
        
        sort(points.begin(), points.end(),compareFirstValue);
        
        int cnt = 1;
        int curr_x = points[0][0];  

        for (int i = 1; i < points.size(); i++) {
            if (points[i][0] <= curr_x + w) {
                continue;
            } else {
                curr_x = points[i][0];
                cnt++;
            }
        }
        
        return cnt;
    }
};
