#include<iostream>
using namespace std;

int main(){
    long long i,j,l,k=0,arr[5];
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    j=l=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>=j){
            j=arr[i];
        }
        if (arr[i]<=l){
            l=arr[i];
        }
        k=k+arr[i];
    }
    
    cout<<k-j<<" "<<k-l<<endl;
}
