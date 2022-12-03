class Solution {
public:
    int value(char c)
    {
        if (c=='I')
            return 1;
        if(c=='V')
            return 5;
        if(c=='X')
            return 10;
        if(c=='L')
            return 50;
        if(c=='C')
            return 100;
        if(c=='D')
            return 500;
        if(c=='M')
            return 1000;
        
        return -1;
    }
    int romanToInt(string s) {
       int ans=0;
        for(int i=0;i<s.length();i++)
        {
            int v1=value(s[i]);
            if(i+1<s.length()){
            int v2=value(s[i+1]);
            if(v1>=v2)
            ans=ans+v1;
            else{
            ans=ans+v2-v1;
                i++;
            }
            }
           else {
            ans = ans + v1;
        } 
        }
        return ans;
    }
};