#include <bits/stdc++.h>
using namespace std;

void sum(int arr[5])
{
    int min;
    min = arr[0] + arr[1] + arr[2] + arr[3];
    int max;
    max = arr[1] + arr[2] + arr[3] + arr[4];
    cout << "Min= " << min << endl;
    cout << "Max= " << max << endl;
}
int main()
{

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + 5);
    sum(arr);
    return 0;
}