class Solution {
public:
    bool isPalindrome(int x) {
        long int y=0, temp=x;
        if(x<0) return 0;
        while(temp){
            y=y*10;
            (y)+=(temp%10);
            temp/=10;
        }
        if(y==x) return 1;
        else return 0;
    }
};