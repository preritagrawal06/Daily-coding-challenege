#include <bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int i,j=0;
    char b,c;
    b='a'; c='A';
    string s;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        
        if(s[i]==b || s[i]==c)
        {
            b++;
            c++;
            j++;
            i=-1;
        }
    }
    
    if(j==26)
    cout<<"pangram"<<endl;
    else
    cout<<"not pangram"<<endl;
    return 0;
}
