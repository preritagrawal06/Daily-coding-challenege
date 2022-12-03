class Solution {
public:
    bool halvesAreAlike(string s) {
         int n = s.length();
        unordered_multiset<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'}, first, second;
        for(int i=0; i<n/2; ++i){
            if(vowels.count(s[i])) 
            first.insert(s[i]);
            if(vowels.count(s[n-i-1])) 
            second.insert(s[n-i-1]);
        }
        if(first.size() == second.size())
            return true;
        else
            return false; 
    }
};