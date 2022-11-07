#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    int flag[26]={0};
    for(int i=0; i<s.length();i++){
        for (int j=0;j<26;j++){
            if(s[i]==alphabet[j]){
                flag[s[i]-65]=1;
            }    
        }
        
    }
    for(int i=0;i<26;i++){
        if (flag[i]==0)
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