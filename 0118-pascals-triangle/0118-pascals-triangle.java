class Solution {
    public List<List<Integer>> generate(int numRows) {
    List<List<Integer>> mat=new ArrayList<>();
    for(int i=0;i<numRows;i++)
    {
        mat.add(generaterow(i+1));    
    }
     return mat;   
    }
    public List<Integer> generaterow(int row)
    {
        int result=1;
         List<Integer> rows =new ArrayList<>();
        rows.add(result);
        for(int i=1;i<row;i++)
        {
            result=result*(row-i);
            result=result/i;
            rows.add(result);
        }
        return rows;
    }
}