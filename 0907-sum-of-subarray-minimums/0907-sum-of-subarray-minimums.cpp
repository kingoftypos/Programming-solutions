class Solution {
    public:
    void nextminleft(vector<int> &nml,vector<int> &arr)
    {
        int n=arr.size();
        stack<int> st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            {
                nml[st.top()]=i;
               st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
             nml[st.top()]=-1;
               st.pop();
        }
    }
    public:
    void nextminright(vector<int> &nmr,vector<int> &arr)
    {
        int n=arr.size();
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
               nmr[st.top()]=i;
               st.pop();
            }
            st.push(i);
        }
        while(!st.empty())
        {
            nmr[st.top()]=n;
            st.pop();
        }
    }
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int> nml(n),nmr(n);
        nextminleft(nml,arr);
        nextminright(nmr,arr);
        long long ans=0;
        const int MOD=1e9+7;
        for(int i=0;i<n;i++)
        {
           
          long long lm=i-nml[i];
          long long rm=nmr[i]-i;
          ans+=(lm*rm)*arr[i];
           ans=ans%MOD;
          
        }
       
        return (int)ans;

        
    }
};