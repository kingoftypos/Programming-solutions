class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
       
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        //converting map to vector
         vector<pair<char,int>> vec(mpp.begin(),mpp.end());
         //sorting based on the second value using lambda function
         sort(vec.begin(),vec.end(),[](const auto &a,const auto &b){
             return a.second>b.second;
         });

        for(auto &it:vec)
        {
            while(it.second!=0)
            {
                ans+=it.first;
                it.second-=1;
            }
        }
        return ans;
    }
};