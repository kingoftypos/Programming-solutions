class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return (double)nums[0];
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        vector<double> arr;
        int times=n/2;
        while(times>0)
        {
            double val=((double)(nums[i])+(double)(nums[j]))/2;
            arr.push_back(val);
            i++;
            j--;
            times--;
        }
        return *min_element(arr.begin(),arr.end());
        
    }
};