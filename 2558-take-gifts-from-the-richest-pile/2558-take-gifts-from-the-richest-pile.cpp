class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        for(int i=0;i<gifts.size();i++)
        pq.push(gifts[i]);
        while(k)
        {
            int temp=pq.top();
            pq.pop();
            temp=(int)sqrt(temp);
            if(temp)
            pq.push(temp);
            k--;
        }
        long long ans=0;
        while(pq.size())
        {
            ans+=pq.top();
            pq.pop();
        }
        return ans;
    }
};