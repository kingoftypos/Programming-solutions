class Solution {
public:
    string minWindow(string s, string t) {
        int n=s.size();
        if(t.size()>n)
        return "";
        unordered_map<char,int> mpp;
        for(char &ch:t)
        mpp[ch]++;
        int requiredCount=t.size();
        int i=0,j=0;
        int window_size=INT_MAX;
        int start_i=0;
        while(j<n)
        {
            char ch=s[j];
            if(mpp[ch]>0)
            requiredCount--;
            mpp[ch]--;
            while(requiredCount==0)
            {
                int curr=j-i+1;
                if(window_size>curr){
                window_size=curr;
                start_i=i;
                }
                mpp[s[i]]++;
                if(mpp[s[i]]>0)
                {
                    requiredCount++;
                }
                i++;
            }
            j++;
        }
        return window_size==INT_MAX ? "":s.substr(start_i,window_size);
        
    }
};