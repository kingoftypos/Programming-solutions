class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int temp=0;
        int count=0;
        int ans=0;
        int n=people.size();
        for(int i=0;i<n;i++)
        {
            if(people[i]<=limit)
            {
                ans++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(count==2)
            {
                if(temp<=limit)
                ans--;
                count=0;
                temp=0;
                
            }
            temp+=people[i];
            count++;
        }
        if(count==2)
            {
                if(temp<=limit)
                ans--;
                count=0;
                temp=0;
                
            }
        
        return ans;
        
    }
};