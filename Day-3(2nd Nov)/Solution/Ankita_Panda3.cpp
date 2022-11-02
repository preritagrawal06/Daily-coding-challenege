#include<iostream>
using namespace std;

int main(){
    long int arr[5],i,j,k;
    long int sum=0,m,n;

     for(i=0;i<5;i++){
        cin>>arr[i];
    }
    m=n=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>=n){
            n=arr[i];
        }
        if(arr[i]<=m)
        {
            m=arr[i];
        }
        sum=sum+arr[i];
    }

    cout<<sum-n <<" "<<sum-m <<endl;
    return 0;
}

