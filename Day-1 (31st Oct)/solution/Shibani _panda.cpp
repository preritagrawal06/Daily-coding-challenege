#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    
    while (n--)
    {
        int grade;
        cin>>grade;
       if (grade< 38) {
          cout<<grade<<endl;
       }
       else {
          int a,b;
          a = grade/5;
          b = (a+1) * 5;
           if ( b-grade <= 2) {
                cout<<b<<endl;
           }
           else {
               cout<<grade<<endl;
           }
       }
    }
    
    return 0;
}