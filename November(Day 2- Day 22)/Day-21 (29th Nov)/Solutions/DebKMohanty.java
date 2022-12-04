class Solution {
    public boolean isPalindrome(int x) {
        int d,rem =0;
        int num = x;
    
        while(x>0){
            d = x%10;
            rem = (rem*10) + d;
            x=x/10;
            
        }
        if(num==rem){
            return true;
        }
        
            return false;
        
    }
}