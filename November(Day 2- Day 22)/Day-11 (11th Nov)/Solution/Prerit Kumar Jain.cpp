#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string str = s.substr(0,2);
    int t = stoi(str);
    if(s[8] == 'P') {
        if(t==12)
            return s.substr(0,8);
        else {
            t+=12;
            string ans = to_string(t);
            return ans+s.substr(2,6);
        }
    }
    else {
        if(t==12)
            return "00"+s.substr(2,6);
        else 
            return s.substr(0,8);
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