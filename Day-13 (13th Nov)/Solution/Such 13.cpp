#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int arr[200];
    arr[0]=1;
    int len=1,temp=0;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<len;j++)
        {
            temp=arr[j]*i+temp;
            arr[j]=temp%10;
            temp=temp/10;
        }
        while(temp)
        {
            arr[len]=temp%10;
            temp=temp/10;
            len++;
        }
    }
    for(int i=len-1;i>=0;i--)
    {
        cout<<arr[i];
    }
    return 0;
}
