
#include<iostream>
using namespace std;


int main(){
    int a,b,t;
    cin>>t;
    while(t--){
        cin>>a;
        if(a<38){
            cout<<a<<endl;   
        }
        else if(a>=38){
           b=a%5;
           if(b==3){
               cout<<a+2<<endl;
           }
           else if(b==4){
               cout<<a+1<<endl;
           }
           
           else{
               cout<<a<<endl;
           }
        }
    }
    return 0;
    
}