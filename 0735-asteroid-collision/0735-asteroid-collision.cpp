class Solution {
    public:
    bool checkopp(int val1,int val2)
    {
        if(val1<0 &&val2>0)
        return false;
        else if(val1>0 && val2<0)
        return true;
       return false;

    }
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n=asteroids.size();
        for(int i=0;i<n;i++)
        {
            if(!st.empty() && checkopp(st.top(),asteroids[i]))
            {
            while(!st.empty() && checkopp(st.top(),asteroids[i]))
            {
               if( abs(st.top())<abs(asteroids[i]) )
               {
                   st.pop();
                   if(!st.empty() && !checkopp(st.top(),asteroids[i]))
                   {
                       st.push(asteroids[i]);
                       break;
                   }else if(st.empty())
                   {
                       st.push(asteroids[i]);
                       break;
                   }

               }
               else if(abs(st.top())==abs(asteroids[i]))
               {
                   st.pop();
                   break;
               }
               else
               {
                   break;
               }
            }
            }
            else
            st.push(asteroids[i]);
        }
        vector<int> ans(st.size());
        //int j=;
        for(int i=st.size()-1;i>=0;i--)
        {
            ans[i]=st.top();
            st.pop();
        }
        return ans;
        
    }
};