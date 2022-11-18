#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]-a[i]==d)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(a[k]-a[j]==d)
                    {
                        c++;
                        break;
                    }
                }
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
