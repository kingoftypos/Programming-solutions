class Solution {
public:
    int characterReplacement(string s, int k) {
        int i = 0, j = 0, ans = 0,maxi=0;
        vector<int> a(26, 0);
        while (j < s.size()) {
            a[s[j] - 'A']++;
            maxi=max(maxi,a[s[j]-'A']);
            int res = (j - i + 1) - maxi;
            while (res > k) {
                a[s[i] - 'A']--;
                i++;
                res = (j - i + 1) - maxi;
            }

            ans = max(ans, j - i + 1);
            j++;
        }
        return ans;
    }
};