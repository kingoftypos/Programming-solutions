class Solution {
public:
    string interpret(string command) {
        string ans="";
        int i=0;
        while(i<command.size())
        {
            if(command[i]=='G')
            ans+="G";
            else if(command[i]=='('&&command[i+1]==')')
            ans+='o';
            else if(command[i]=='('&&command[i+1]=='a')
            ans+="al";
            i++;
        }
        return ans;
        
    }
};