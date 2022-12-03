#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int grade,temp,c;
        cin>>grade;
        if(grade<38){
            cout<<grade<<endl;
        }
        else{
          temp= grade/5;
          c=(temp+1)*5;
          if(c-grade<=2){
            cout<<c<<endl;
          }
          else{
            cout<<grade<<endl;
          }
        }

    }

return 0;
}
