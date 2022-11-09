#include <bits/stdc++.h>
using namespace std;

int ans(int n, int s[], int d, int m){
    int a = 0, sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j=0; j<m; j++){
            sum+=s[i+j];
        }
        if(sum==d) a++;
    }
    
    return a;
}

int main(){
    
    int n;
    cin>>n;
    int s[n];
    for(int i = 0; i < n; i++){
        cin>>s[i];
    }
    int d, m;
    cin>>d>>m;
    
    cout<<ans(n, s, d, m)<<endl;
    
    return 0;
}