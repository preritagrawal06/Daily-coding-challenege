#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>arr[i][j];
        }
    }
    int a1=0, a2=0, j= 0;
    for(int i = 0; i < n; i++){
        a1+=arr[i][j];
        a2+=arr[n-i-1][j];
        j+=1;
    }
    int x = a1-a2;
    if(x<0){
        cout<<-x<<endl;
    }else{
        cout<<x<<endl;
    }
    
    return 0;
}