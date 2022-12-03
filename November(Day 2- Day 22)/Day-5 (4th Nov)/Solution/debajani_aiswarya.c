#include<stdio.h>
int main(){
    int n,p,a1,a2;
    scanf("%d",&n);
    scanf("%d",&p);
    a1=p/2;
    a2=(n-p)/2;
    if(a1>a2)
    {
        printf("%d",a2);
    }
    else
    {
       printf("%d",a1);
    }
    return 0;
}
