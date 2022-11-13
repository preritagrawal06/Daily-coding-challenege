#include<bits/stdc++.h>

using namespace std;
#define m 110
int hsh[m];

int main(){
    int n;
    int count=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        hsh[arr[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (hsh[i]>1)
        {
            count+=hsh[i]/2;
        }
        
    }
    cout<<count<<endl;

    
    return 0;
}