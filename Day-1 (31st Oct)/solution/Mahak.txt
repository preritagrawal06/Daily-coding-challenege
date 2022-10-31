#include <bits/stdc++.h>
using namespace std;

int ans(int n){
    if(n<38){
        return n;
    }else if((n+1)%5==0){
        return (n+1);
    }else if((n+2)%5==0){
        return (n+2);
    }else if((n)%5==0){
        return (n);
    }else{
        return n;
    }
}

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        cout<<ans(x)<<endl;
    }
    
    return 0;
}