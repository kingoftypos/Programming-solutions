class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans;
        int x = 1;
        for(int i=0; i<n/2; i++){
            ans.push_back(x);
            ans.insert(ans.begin(), -x);
            x++;
        }
        if (n%2!=0) ans.push_back(0);
        return ans;
    }
};