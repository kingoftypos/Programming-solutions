class Solution {
    public:
    void solve(vector<string> &ans,string &temp,unordered_map<int,string>  &mpp,int input)
    {
        if(input==0)
        {
            ans.push_back(temp);
            return;
        }
        
        string s1=mpp[input%10];
        for(int i=0;i<s1.size();i++)
        {
            temp=s1[i]+temp;
            solve(ans,temp,mpp,input/10);
            temp = temp.substr(1);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<int,string> mpp{
            {0,""},
            {1,""},
            {2,"abc"},
            {3,"def"},
            {4,"ghi"},
            {5,"jkl"},
            {6,"mno"},
           {7,"pqrs"} ,
           {8,"tuv"},
           {9,"wxyz"}
        };
        if(digits.empty())return{};
        int input=stoi(digits);
        vector<string> ans;
        string temp="";
        solve(ans,temp,mpp,input);
        return ans;
        
    }
};