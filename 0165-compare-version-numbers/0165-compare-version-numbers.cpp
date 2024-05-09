class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream ss1(version1);
        stringstream ss2(version2);
        string token1,token2;
        vector<int> v1,v2;
        while (getline(ss1, token1, '.')) {
            int val=stoi(token1);
        v1.push_back(val);
    }
    while (getline(ss2, token2, '.')) {
        int val=stoi(token2);
        v2.push_back(val);
    }
    int i=0;
    while(i<v1.size() && i<v2.size())
    {
        if(v1[i]<v2[i])
        return -1;
        else if(v1[i]>v2[i])
        return 1;
        else
        i++;
    }
    while(i<v1.size())
    {
        if(v1[i]>0)
        return 1;
        else
        i++;
    }
    while(i<v2.size())
    {
        if(v2[i]>0)
        return -1;
        else
        i++;
    }
    return 0;


    }
    
};