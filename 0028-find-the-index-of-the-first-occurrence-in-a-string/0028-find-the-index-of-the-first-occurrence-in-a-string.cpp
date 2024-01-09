class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)!=string::npos)
        return(int)(haystack.find(needle));
        else
        return -1;
        
    }
};