#include<bits/stdc++.h>

using namespace std;

int change(int n){
  if(n<40){
    return n;
  }
  else{
  int q=n/5;
  int mul=q+1;
  int num=5*mul;
  if((num-n)<3){
    return num;
  }
  else{
    return n;
  }
  }
}

int main(){
    int n,arr[n-1];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<change(arr[i])<<endl;
    }
    
    return 0;
}