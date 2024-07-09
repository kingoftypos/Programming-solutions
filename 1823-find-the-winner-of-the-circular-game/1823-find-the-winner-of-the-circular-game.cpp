class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> temp;
        for(int i=1;i<=n;i++)
        temp.push_back(i);
        int index=0;
        while(temp.size()!=1)
        {
           int rem=(index+k-1)%(temp.size());
           temp.erase(temp.begin()+rem);
           index=(index+k)%(temp.size());


        }
        return temp[0];
        
    }
};