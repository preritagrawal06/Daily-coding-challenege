#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
  char ap=s[8]; string ans="";
  if(ap=='A')
  {
      string mn=s.substr(0,2);
      
      int m=stoi(mn);
      if(mn=="12")
      {
          ans="00"+s.substr(2,6);
          return ans;
      }
      else
      {
          ans=s.substr(0,8);
          return ans;
      }
  }
  else
  {
      string mn=s.substr(0,2);
      int m=stoi(mn);
     if(m==12){
         ans=s.substr(0,8);
         return ans;
     }
     else{
          int mew=12+m;
      string mews=to_string(mew);
      ans=mews+s.substr(2,6);
      return ans;
     }
  }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
