#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
   int x = s.length();
    if(s[x-2]=='A'){
        string temp = s.substr(0,2);
        int h = stoi(temp);
        if(h==12){
            string hr = "00";
            string ans = hr.append(s.substr(2,6));
            return ans;
        }else{
            return s.substr(0,x-2);
        } 
    } 
    else{
        string temp = s.substr(0,2);
        int h = stoi(temp);
        if(h==12){
            return s.substr(0,x-2);
        }
        int pm = h+12;
        string hr = to_string(pm);
        string ans = hr.append(s.substr(2,6));
        return ans;
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
