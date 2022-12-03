#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int f=0;
        long long a,b,i;
        cin>>a>>b;
        float g;
        i=sqrt(a);
        while(i<=sqrt(b))
        {
            if(i*i>=a && i*i<=b)
            f++;
            i++;
        }   
        cout<<f<<endl;
    }
    return 0;
}
