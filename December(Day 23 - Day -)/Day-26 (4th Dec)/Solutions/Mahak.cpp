class Solution {
public:
    string intToRoman(int n) {
        int nor[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string res;
        for(int i=0;i<13;i++){
            while(n>=nor[i]){
                res.append(roman[i]);
                n-=nor[i];
            }
        }
        return res;
    }
};