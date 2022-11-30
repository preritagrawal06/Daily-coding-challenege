class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0;
        int  min=strs[0].length();
        for(int i=1;i<strs.size();i++)
        {
          if(min<strs[i].length())
              min=strs[i].length();
        }
        int j=0;string ans="";int f=0;
        while(j<min)
        {
            char c=strs[0][j];
            for(int i=1;i<strs.size();i++)
            {
                if(strs[i][j]!=c)
                {
                    f=1;
                    break;
                }
               
            }
            if(f==0)
                ans=ans+c;
            else
                break;
            j++;
        }
        return ans;
    }
};