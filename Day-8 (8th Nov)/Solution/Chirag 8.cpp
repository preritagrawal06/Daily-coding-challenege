#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,arr[100][100];
    cin>>n;    
    for(i=0;i<n;i++)
     for(j=0;j<n;j++)
     cin>>arr[i][j];
     int d1=0,d2=0;
    for(i=0;i<n;i++)
      d1=d1+arr[i][i];
    i=0;
    j=n-1;
    while(j>=0)
    {
        d2=d2+arr[i][j];
        i++;
        j--;
    }
    cout<<abs(d1-d2)<<endl;
    return 0;
}