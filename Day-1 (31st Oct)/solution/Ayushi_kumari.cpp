#include<iostream>
using namespace std;
int main()
{
  int n,grade,t,s,c ;
  cin>>n;
  while(n--){
  cin>>grade;
    if(grade<38){
        cout<<grade<<endl;
    }
    else{
    t=grade%5;
    s=grade/5;
    c=5*(s+1);
        if( t>=3){
        cout<<c<<endl;
        }
        else{
        cout<<grade<<endl;
        }
    }
    } 
    
return 0;  
}
