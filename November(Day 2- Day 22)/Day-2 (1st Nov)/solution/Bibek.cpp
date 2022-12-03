#include<iostream>
using namespace std;
int main()
{
    int n,max=0,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==max){
            count++;
        }
    }
    cout<<count<<endl;
return 0;
}
