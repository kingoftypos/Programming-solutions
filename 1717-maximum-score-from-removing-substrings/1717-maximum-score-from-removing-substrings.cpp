class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st1, st2;
        int score = 0;
        int n = s.size();
        int flag = (x > y) ? 1 : 0;
        
        if (flag) {
            for (int i = 0; i <n; i++) {
                if (!st1.empty() && st1.top() == 'a' && s[i] == 'b') {
                    st1.pop();
                    score += x;
                } else {
                    st1.push(s[i]);
                }
            }
            
            string tri = "";
            while (!st1.empty()) {
                tri += st1.top() ;
                st1.pop();
            }
            reverse(tri.begin(),tri.end());
            int m = tri.size();
            for (int i = 0; i <m; i++) {
                if (!st2.empty() && st2.top() == 'b' && tri[i] == 'a') {
                    st2.pop();
                    score += y;
                } else {
                    st2.push(tri[i]);
                }
            }
        } else {
            for (int i = 0; i <n; i++) {
                if (!st2.empty() && st2.top() == 'b' && s[i] == 'a') {
                    st2.pop();
                    score += y;
                } else {
                    st2.push(s[i]);
                }
            }
            
            string tri = "";
            while (!st2.empty()) {
                tri += st2.top();
                st2.pop();
            }
            reverse(tri.begin(),tri.end());
            int m = tri.size();
            for (int i = 0; i <m; i++) {
                if (!st1.empty() && st1.top() == 'a' && tri[i] == 'b') {
                    st1.pop();
                    score += x;
                } else {
                    st1.push(tri[i]);
                }
            }
        }
        
        return score;
    }
};
