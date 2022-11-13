#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string str="";
    if(s[8]=='A'){
        if(s[0]=='1' && s[1]=='2'){
            s[0]='0';
            s[1]='0';
        }
        for(int i=0;i<8;i++){
            str+=s[i];
        }
    }
    if(s[8]=='P'){
        if(s[0]=='1' && s[1]=='2'){
            
        }
        else{
            string x="";
            x+=s[0];
            x+=s[1];
            int a=stoi(x);
            a+=12;
            x=to_string(a);
            s[0]=x[0];
            s[1]=x[1];
            
        }
        for(int i=0;i<8;i++){
            str+=s[i];
        }

    }
    return str;
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
