class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> list;
        sort(nums.begin(),nums.end());
       for(int i=1;i<=nums.size();i++)
       {
           if(!binary_search(begin(nums),end(nums),i))
           list.push_back(i);
       }
        return list;
        
    }
};