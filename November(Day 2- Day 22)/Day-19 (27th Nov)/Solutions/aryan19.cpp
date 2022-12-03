class Solution {
public:
    int romanToInt(string s) {
        int f=0;
        map<char, int> t{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        for(int i = 0; i < s.length(); i++){
            if(t[s[i]] < t[s[i+1]]){
                f-=t[s[i]];
            }else{
                f+=t[s[i]];
            }
        }
        return f;
    }
}; //Roman to integer