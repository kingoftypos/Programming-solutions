class Solution {
public:
    bool doesAliceWin(string s) {
        stack<int> st;
        int last_deleted=-1;
        bool flag=1; //1->alice 0->bob
        int n=s.size();
        for(int i=n-1;i>=0;i--)
        {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            st.push(i);
        }
        while(1)
        {
            if(flag)
            {
                if(st.size()==0)
                {
                    return false;
                }else if(st.size()%2==0)
                {
                    int todelete=st.size()-1;
                    while(todelete--)
                    {
                        last_deleted=st.top();
                        st.pop();
                    }

                }
                else
                {
                    int todelete=st.size();
                    last_deleted=st.size()-1;
                    while(todelete--)
                    {
                        st.pop();
                    }
                }
                
            }
            else
            {
                if(st.size()>0 && st.size()%2==0)
                {
                    int todelete=st.size();
                    last_deleted=st.size()-1;
                    while(todelete--)
                    {
                        st.pop();
                    }
                }
                else if(st.size()==0 && last_deleted>0 && (last_deleted<n-1))
                last_deleted++;
                else
                return true;
            }
            flag=!flag;

        }

        
        
        
    }
};