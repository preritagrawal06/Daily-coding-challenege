#include <iostream>
using namespace std;
int main()
{
    int  sum =0, max =0,min;
    
    int a[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum+=a[i];
    
        if (a[i] > max)
        {
            max = a[i];
        }
        
        if (a[i] < min)
        {
        min = a[i];
        }
    }
   
    

    cout << sum-min << "\t" << sum-max << endl;

    return 0;
}
