class Solution {
public:
    int maxFrequency(vector<int>& v, int k) {
        int n=v.size();
        sort(v.begin(),v.end());
       int l=0;
       int result=0;
       long currsum=0;
       for(int r=0;r<n;r++)
       {
           currsum+=v[r];
           long target=v[r];
           
           if((r-l+1)*target-currsum>k)
           {
               currsum-=v[l];
               l++;
           }
           result=max(result,r-l+1);
       }
       return result;


       
        
    }
};