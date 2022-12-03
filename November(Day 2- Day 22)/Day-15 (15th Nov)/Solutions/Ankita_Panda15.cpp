#include <bits/stdc++.h>

using namespace std;

int main(){
    float even=0,odd=0,null=0;
    int n,i,j;
    float a,b,c,d;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++){
        if(arr[i]==0){
            null++;
        }
        
        else if(arr[i]>0){
           even++; 
        }
        
        else if(arr[i]<0){
            odd++;
        }
        
        
    }
    a=even/n;
    b=odd/n;
    c=null/n;
    
    cout<<a<<endl<<b<<endl<<c<<endl;
    return 0;
    
}
