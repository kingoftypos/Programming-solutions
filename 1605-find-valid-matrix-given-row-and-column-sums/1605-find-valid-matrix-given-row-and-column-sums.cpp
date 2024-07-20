class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int n=rowSum.size();
        int m=colSum.size();
        vector<vector<int>> arr(n,vector<int>(m,0));
        int i=0,j=0;
        while(i<n && j<m)
        {
            int val=min(rowSum[i],colSum[j]);
            arr[i][j]=val;
            rowSum[i]-=val;
            colSum[j]-=val;
            if(!rowSum[i])
            i++;
            else
            j++;
        }
        return arr;
    }
};