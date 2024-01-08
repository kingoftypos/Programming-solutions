class Solution {
public:
    int maxRepeating(string sequence, string word) {
        int count=0;
        string t=word;
        while(sequence.find(t)!=string::npos)
        {
            count++;
            t+=word;
        }
        return count;
        
    }
};