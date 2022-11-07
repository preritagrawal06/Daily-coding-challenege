#include<stdio.h>
int main()
{
    int i;
    int n;
    int max=0;
    scanf("%d",&n);

    int arr[n];
    int count=0;

    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
        if(max<arr[i])
            max=arr[i];
    }
    for(i=1; i<=n; i++)
        if(arr[i]==max)
            count++;

    printf("%d\n",count);
    return 0;
}
