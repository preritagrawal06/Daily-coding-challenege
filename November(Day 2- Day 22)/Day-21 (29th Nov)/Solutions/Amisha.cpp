#include<iostream>
using namespace std;
int main(){
    int num,a,d,r=0;
    cin>>num;
    a=num;
    while(a!=0){
            d=a%10;
            r=(r*10)+d;
            a=a/10;
        }
        if(num==r){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
    }
