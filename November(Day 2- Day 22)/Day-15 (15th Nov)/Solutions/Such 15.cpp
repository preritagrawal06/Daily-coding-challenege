#include <iostream>

using namespace std;

int main()
{
    int n,a[1000],p=0,ne=0,z=0,i;
    float t;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>0)
        {
            p++;
        }
        else if(a[i]<0)
        {
            ne++;
        }
        else
        {
            z++;
        }
    }
    t=(float)n;
    cout<<p/t<<"\n"<<ne/t<<"\n"<<z/t;
}
