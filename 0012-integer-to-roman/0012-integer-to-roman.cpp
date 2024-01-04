class Solution {
public:
    string intToRoman(int num) {
        string one[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
        string twos[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
        string  hndrs[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
        string tsnds[]={"","M","MM","MMM"};
        

        return tsnds[num/1000]+hndrs[(num%1000)/100]+twos[(num%100)/10]+one[(num%10)];
        
        
    }
};