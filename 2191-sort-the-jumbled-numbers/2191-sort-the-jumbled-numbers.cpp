class Solution {
public:
    static bool comp(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second < b.second; 
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>> temp;
        
        for (int i : nums) {
            int val = 0;
            int original = i;
            int place = 1;            
            if (i == 0) {
                val = mapping[0];
            } else {
                
                while (i > 0) {
                    int digit = i % 10;
                    val = mapping[digit] * place + val;
                    place *= 10;
                    i /= 10;
                }
            }
            
            temp.push_back({original, val});
        }
        
        stable_sort(temp.begin(), temp.end(), comp); 
        
        vector<int> ans;
        for (auto it : temp)
            ans.push_back(it.first);
        
        return ans;
    }
};
