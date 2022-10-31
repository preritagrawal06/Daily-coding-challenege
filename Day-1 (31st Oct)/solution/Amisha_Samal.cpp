#include<iostream>
using namespace std;

int main(){
    
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        
        int x;
        x=((n/5)+1)*5;
        if(n<38)
              cout<<n<<endl;
        else if (x-n<3)
              cout<<x<<endl;
        else 
              cout<<n<<endl;
    }
    return 0;
}