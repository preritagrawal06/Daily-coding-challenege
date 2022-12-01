class Solution {
public:
    bool isPalindrome(int x) {
        long long d,f,sum=0;
        if(x<0 // x>2147483647
)
            return false;
        else{
            f=x;
            while(x!=0)
                {
                   d=x%10;
                   sum=(sum*10)+d;
                if(sum>2147483647
)
                    return false;
                x=x/10;
                }
            if(f==sum)
                return true;
            else 
                return false;
            }
    }
};