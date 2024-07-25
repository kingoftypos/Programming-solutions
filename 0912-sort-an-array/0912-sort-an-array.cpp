class Solution {
public:
        vector<int> merge(vector<int> &a,vector<int> &b)
        {
            int i=0,j=0;
            int n=a.size();
            int m=b.size();
            vector<int> result;
            while(i<n && j<m)
            {
                if(a[i]<=b[j])
                {
                    result.push_back(a[i]);
                    i++;
                }
                else
                {
                    result.push_back(b[j]);
                    j++;
                }
            }
            while(i!=n)
            {
                result.push_back(a[i]);
                i++;

            }
            while(j!=m)
            {
                result.push_back(b[j]);
                j++;
            }
            return result;
        }
        vector<int> partition(vector<int> &nums,int start,int end)
        {
            int mid=(start+end)/2;
            vector<int> a,b;
            if(mid==start && mid==end)
            {
                vector<int> temp;
                temp.push_back(nums[mid]);
                return temp;
            }
           a= partition(nums,start,mid);
           b=partition(nums,mid+1,end);
           vector<int> ans=merge(a,b);
           return ans;
        }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        ans=partition(nums,0,n-1);
        return ans;
        
        
    }
};