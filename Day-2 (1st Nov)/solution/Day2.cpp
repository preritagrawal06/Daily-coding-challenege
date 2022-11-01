#include<iostream>
using namespace std;

int main(){
    int i,j,n,l=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    j=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>=j){
            j=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]==j){
          l=l+1;  
        }
    }
    cout<<l;
    
}
