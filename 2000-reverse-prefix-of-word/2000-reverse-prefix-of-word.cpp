class Solution {
public:
    string reversePrefix(string word, char ch) {
        int last=word.find(ch);
        reverse(word.begin(),word.begin()+last+1);
        return word;


        
    }
};