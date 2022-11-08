#include<iostream>
#include <bits/stdc++.h>

#include <string.h>
using namespace std;

bool chk_Pangram(string s)
{
    
    int Arr[26] = { 0 };

    
    for (int i = 0; i < s.length(); i++) 
    {
       
        if (isupper(s[i])) 
        {
           Arr[ s[i] - 'A' ]++;
        }
        
        else if (islower(s[i])) 
        {
            Arr[ s[i] - 'a' ]++;
        }
     }
 
    
    for (int i = 0; i < 26; i++) 
    {
        if(Arr[i] == 0)
            return false;
    }
 return true;
}


int main(void)
{
    string s ;
    getline(cin, s);

    if (chk_Pangram(s) == true)
        printf(" Pangram");
    else
        printf("not Pangram");

 return 0;
}