
#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int arr[n];
   int i;
   int m=0;
   int count=0;
   for (i=0; i<n; i++) {
        cin>>arr[i];
        if (arr[i] > m) {
            m = arr[i];
        }
   }
   for (i=0; i<n; i++) {
        if (arr[i] == m) {
           count++;
        }
   }
   cout<<count;
   return 0;
}