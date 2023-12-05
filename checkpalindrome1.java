class Solution {
    public boolean isPalindrome(String s) {
        
        s=s.replaceAll("[^a-zA-Z0-9]","");
        s=s.toLowerCase();
        int n=s.length();
       // char start=str.charAt(0);
        int i=0;
        boolean check=true;
       // char end=str.charAt(n-1);
        while(i<(n/2))
        {
            if(s.charAt(i)!=s.charAt(n-1-i))
            {
                check=false;
                break;
            }
            i++;
            
        }
        return check;
    }
}