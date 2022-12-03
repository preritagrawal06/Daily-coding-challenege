class Solution {
public:
    string intToRoman(int num) {
        map<int,string> m;
        m[1] = "I";
        m[4] = "IV";
        m[5] = "V";
        m[9] = "IX";
        m[10] = "X";
        m[40] = "XL";
        m[50] = "L";
        m[90] = "XC";
        m[100] = "C";
        m[400] = "CD";
        m[500] = "D";
        m[900] = "CM";
        m[1000] = "M";
        string s = "";
        while(num>0) 
            for(auto it = m.rbegin();it!=m.rend();it++) 
                while(it->first<=num) {
                    s+=it->second;
                    num-=it->first;
                }
        return s;
    }
};