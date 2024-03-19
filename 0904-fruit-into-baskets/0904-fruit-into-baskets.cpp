class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        stack<int> st1,st2;
        int i=0,j=0,ans=0;
        while(j<fruits.size())
        {
            if(st1.empty() || st1.top()==fruits[j])
            {
                st1.push(fruits[j]);
            }
            else if(st2.empty() || st2.top()==fruits[j])
            {
                st2.push(fruits[j]);
            }
            else
            {
                while(!st1.empty() && !st2.empty())
                {
                    if(st1.top()==fruits[i])
                    st1.pop();
                    else
                    st2.pop();
                    i++;
                }
                if(st1.empty())
                st1.push(fruits[j]);
                else
                st2.push(fruits[j]);
            }
            ans=max(ans,j-i+1);
            j++;
            
        }
        return ans;
        
    }
};