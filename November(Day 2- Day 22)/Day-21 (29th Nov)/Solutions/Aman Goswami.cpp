class Solution {
public:
    bool isPalindrome(int x) {
       string zzzz = to_string(x);
        int i = 0, j = zzzz.length() - 1;
        
        while(i <= j)
        {
            if(zzzz[i] != zzzz[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};