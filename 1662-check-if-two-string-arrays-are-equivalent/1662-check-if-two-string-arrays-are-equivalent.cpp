class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string wrd1="",wrd2="";
        for(int i=0;i<word1.size();i++)
        {
            wrd1+=word1[i];
        }
        for(int i=0;i<word2.size();i++)
        {
            wrd2+=word2[i];
        }
        if(wrd1==wrd2)
        return true;
        else
        return false;
    }
};