#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int maxN=0, ans=0;
    for(int i=0; i < n; i++){
        if(maxN<arr[i]){
            maxN=arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i]==maxN){
            ans++;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}