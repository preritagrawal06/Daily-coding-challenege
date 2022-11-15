#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int f=0;
        long long a,b,i=1,num=1;
        cin>>a>>b;
        float g;
        while(i<=sqrt(b))
        {
            if(i*i>=a && i*i<=b)
            f++;
            num++;
            i=num*num;
        }   
        cout<<f<<endl;
    }
    return 0;
}
