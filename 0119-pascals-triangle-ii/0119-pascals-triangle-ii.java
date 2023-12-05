class Solution {
    public List<Integer> getRow(int rowIndex) {
        int row=rowIndex+1;
        long result=1;
         List<Integer> rows =new ArrayList<>();
        rows.add((int)result);
        for(int i=1;i<row;i++)
        {
            result=result*(row-i);
            result=result/i;
            rows.add((int)result);
        }
        return rows;
        
    }
}