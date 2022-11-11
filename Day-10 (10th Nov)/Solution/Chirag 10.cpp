 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n,i,j=0,k;
    cin>>n;
    int a[n],c[n],g=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(k=i+1;k<n;k++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    c[j]=1;
    i=0;
    while(i<n-1)
    {
        if(a[i]==a[i+1])
           c[j]++;
        else
        {
            j++;
            c[j]=1;
        } 
        i++;  
    }  
    for(i=0;i<=j;i++)
    {
        if(c[i]%2!=0)
           g++;
    } 
    cout<<g<<endl; 
 }
