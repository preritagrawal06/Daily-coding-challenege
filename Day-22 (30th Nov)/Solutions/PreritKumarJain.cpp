class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int lenVect = strs.size();
        string str = "";
        for(int i=0;i<strs[0].size();i++) {
            char c = strs[0][i];
            bool flag = true;
            for(int j=1;j<lenVect;j++) {
                if(c!=strs[j][i] || i>strs[j].size()) {
                    flag = false;
                    break;
                }
            }
            if(flag)
                str.push_back(c);
            else
                break;
        }
        return str;
    }   
};