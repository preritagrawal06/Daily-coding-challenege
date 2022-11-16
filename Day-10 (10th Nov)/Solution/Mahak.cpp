#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0;
    cin>>n;
    int arr[n];
    map <int, int> m;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    for(auto &it:m){
        count+=it.second/2;
    }
    cout<<count<<endl;
    
    return 0;
}