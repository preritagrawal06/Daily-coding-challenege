class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int a=strs[0].length();
        int n=strs.size(), j;
        for(int i = 1; i < n; i++){
            j=0;
            while(j<strs[i].length() && strs[0][j]==strs[i][j]) j++;
            a = min(a, j);
        }
        return strs[0].substr(0, a);
    }
};