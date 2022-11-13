#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,d,i,j,k,count=0,b,c;
    cin>>n>>d;
    int a[n];
    for(i=0; i<n;i++)
        cin>>a[i];
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            for (k=0;k<n;k++) {
                b=a[j]-a[i];
                c=a[k]-a[j];
                if(b==c && b==d)
                   count++;
            }
        }
    } 
    cout<<count<<endl;
    return 0;
}        
