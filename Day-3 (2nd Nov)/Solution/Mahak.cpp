#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int arr[5];
    for(int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    long long int minN = INT_MAX, maxN = 0, sum = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i]<minN){
            minN=arr[i];
        }
        if(arr[i]>maxN){
            maxN=arr[i];
        }
        sum += arr[i];
    }
    cout<<sum-maxN<<" "<<sum-minN<<endl;
}