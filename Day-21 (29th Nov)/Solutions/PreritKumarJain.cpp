class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long copy=x,ld,rev=0;
        while(copy!=0) {
            ld=copy%10;
            rev=rev*10+ld;
            copy=copy/10;
        }
        if(rev==x) 
            return true;
        else
            return false;
    }
};