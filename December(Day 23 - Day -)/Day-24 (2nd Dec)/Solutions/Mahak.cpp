class Solution {
public:
    bool halvesAreAlike(string s) {
        int a=0, b=0, str = s.length();
        for(int i = 0; i < str/2; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                a++;
            }
        }
        for(int i = str/2; i < str; i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                b++;
            }
        }
        if(a==b) return true;
        else return false;
    }
};