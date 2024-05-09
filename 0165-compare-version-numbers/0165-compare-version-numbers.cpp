#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream ss1(version1);
        stringstream ss2(version2);
        string token1, token2;
        vector<int> v1, v2;
        
        // Splitting version strings using '.' as delimiter
        while (getline(ss1, token1, '.')) {
            int val = stoi(token1);
            v1.push_back(val);
        }
        
        while (getline(ss2, token2, '.')) {
            int val = stoi(token2);
            v2.push_back(val);
        }
        
        
        int i = 0;
        while (i < v1.size() || i < v2.size()) { 
            int val1 = (i < v1.size()) ? v1[i] : 0; 
            int val2 = (i < v2.size()) ? v2[i] : 0; 
            
            if (val1 < val2)
                return -1;
            else if (val1 > val2)
                return 1;
            else
                i++;
        }
        
        return 0;
    }
};
