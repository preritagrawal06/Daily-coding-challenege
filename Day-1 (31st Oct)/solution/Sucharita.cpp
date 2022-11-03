#include <bits/stdc++.h>
using namespace std;

int grade(int x){
    if((x+1)%5==0)
    return x+1;
    else if ((x+2)%5==0)
    
    return (x+2);
   
    else if((x+3)%5==0)
    return x;
    else if((x+4)%5==0)
    return x;
    else if((x+5)%5==0)
    return x;
    else 
    return x;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        if (m<38 || m==39)
        cout<<m<<endl;
        else if (m==38) {
        cout<<m+2<<endl;
        }
        else {
        int z= grade(m);
        cout<<z<<endl;
        }
    }
    

    return 0;
}
