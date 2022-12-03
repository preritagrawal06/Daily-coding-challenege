#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
  set<char> st;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
   for(int i=0;i<s.length();i++)
    st.insert(s[i]);
    
    int n=st.size();
    if(n==27)
    return "pangram";
    else
    return "not pangram";
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
