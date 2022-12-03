#include <bits/stdc++.h>
#define N 100000 
using namespace std;

    int main()
    {
        float n,u;
        int count=0;
        float arr[N];
        cin>>n;
        for (int i = 0; i < n; ++i) 
        {
        cin>>arr[i];
        }
        for (int i = 0; i < n; ++i) {
        if (u < arr[i])
         {
         u= arr[i];
         }
        u=arr[i];
        //cout<<u<<endl;
        for (int i = 0; i < n; ++i)
        {
            if(u==arr[i])
            count++;
        }
        cout<<count<<endl;
        return 0;
    }
    }
