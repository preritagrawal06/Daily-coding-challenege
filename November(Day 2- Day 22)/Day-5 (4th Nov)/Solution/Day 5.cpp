#include <bits/stdc++.h>

using namespace std;

int pagecount(int n, int p)
{
    if (p<(n/2))
     {
          return (p/2);
     }
    else if (p>(n/2))
    {
        
         return ((n/2) - (p/2));
        
    }
    else{
        return (p/2);
    }
}

int main()
{
   int n,p;
   cin>>n;
   cin>>p;
   int u;
   u= pagecount(n,  p);
   cout<<u<<endl;
    return 0;
}
