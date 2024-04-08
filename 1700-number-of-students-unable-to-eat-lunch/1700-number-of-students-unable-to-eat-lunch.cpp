class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int zeros=0,ones=0;
        for(int i=0;i<students.size();i++)
        {
        if(students[i]==0)
        zeros++;
        else
        ones++;
        }
        for(int i=0;i<sandwiches.size();i++)
        {
            if(sandwiches[i]==0 && zeros)
            zeros--;
            else if(sandwiches[i]==1 && ones)
            ones--;
            else
            return sandwiches.size()-i;
        }
        return 0;

    }
};