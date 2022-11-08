#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    int idx[26];
    for(int i=0;i<26;i++){
        idx[i]=0;
    }
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        idx[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(idx[i]==0){
            return "not pangram";
        }
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
