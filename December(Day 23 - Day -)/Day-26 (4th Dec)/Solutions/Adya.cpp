class Solution {
public:
    string value(int i1)
    {
        if (i1==1)
            return "I";
        if(i1==4)
            return "IV";
        if(i1==5)
            return "V";
        if(i1==9)
            return "IX";
        if(i1==10)
            return "X";
        if(i1==40)
            return "XL";
        if(i1==50)
            return "L";
        if(i1==90)
            return "XC";
        if(i1==100)
            return "C";
        if(i1==400)
            return "CD";
        if(i1==500)
            return "D";
        if(i1==900)
            return "CM";
        if(i1==1000)
            return "M";
        
        
        return " ";
    }
    string intToRoman(int num) {
        int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string ans="";
         for (int i = 0; i < 13;i++)
        {
            while(num - values[i] >= 0)
            {
                ans=ans+value(values[i]);
                num=num-values[i];
            }
        }
        return ans;
    }
};