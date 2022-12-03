#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    for(auto &ch : s)
        ch = tolower(ch);
    map<char,int> m;
    for(int i = 0; i< s.length();i++) {
        m[s[i]]++;
    }
    if(s.length()==1)
        return "not pangram";
    char small = 'a';
    for(auto val : m) {
        if(val.first == ' ')
            continue;
        else if(val.first == small) {
            small++;
            continue;
        }
        return "not pangram";
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
