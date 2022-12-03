 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
    int n,i,j=0;
    cin>>n;
    int a[n],b[n],g=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    b[j]=1;
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
           b[j]++;
        else
        {
            j++;
            b[j]=1;
        }   
    }  
    for(i=0;i<=j;i++)
    {
        if(b[i]%2!=0)
           g++;
    } 
    cout<<g<<endl; 
 }
