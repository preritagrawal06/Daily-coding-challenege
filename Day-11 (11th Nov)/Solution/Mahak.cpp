#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string ans;
    if(s[8]=='A'){
        if(s[0]=='1' && s[1]=='2'){
            ans = "00"+s.substr(2,6);
        }else{
            ans = s.substr(0,8);
        }
    }else{
        if(s[0]=='1' && s[1]=='2'){
            ans = s.substr(0,8);
        }else{
            string sm = s.substr(0,2);
            int t = stoi(sm) + 12;
            string a = to_string(t);
            ans = a+s.substr(2,6);
        }
    }
    return ans;
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