#include <iostream>
using namespace std;

void  miniMaxSum(long int arr[5])
{   int min;
    min=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    int max;
    max=arr[5]+arr[1]+arr[2]+arr[3]+arr[4];
    cout<<min<<" "<<max<<endl;
    
    
}
int main(){
    
    long int arr[5];
    long int temp;
    for (int i=0; i<5; i++) {
      cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {        
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     void miniMaxSum ( arr);
     return 0;
}
