class Solution {
public:
    int fillCups(vector<int>& amount) {
       priority_queue<int> pq;
       int ans=0;
       for(int i=0;i<amount.size();i++)
       {
        if(amount[i])
        pq.push(amount[i]);
       }
       while(pq.size()>1)
       {
        int temp1=pq.top();
        pq.pop();
        int temp2=pq.top();
        pq.pop();
        temp1--;
        temp2--;
        ans++;
        if(temp1)
        pq.push(temp1);
        if(temp2)
        pq.push(temp2);

       }
       if(pq.size()==1)
       ans+=pq.top();
       return ans;


        
    }
};