#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
       sum1+=arr[i][i];

       sum2+=arr[i][n-i-1];
    }
    
    int k = sum2 - sum1;
    // cout << sum1<<endl;
    // cout<<sum2<<endl;
    cout<<abs(k) << endl;
    return 0;
}

