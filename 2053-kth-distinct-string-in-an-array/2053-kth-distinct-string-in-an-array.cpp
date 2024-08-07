class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mpp;
        for(int i=0;i<arr.size();i++)
        mpp[arr[i]]++;
        for(auto it: arr)
        {
            if(mpp[it]==1 && k==1)
            return it;
            else if(mpp[it]==1)
            {
                k--;
            }
        }
        return "";
    }
};