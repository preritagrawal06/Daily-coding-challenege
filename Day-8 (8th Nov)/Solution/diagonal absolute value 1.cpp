#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
}
int sum =0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==j){
        sum=sum+a[i][j];
    }
    }
}
cout<<sum<<endl;
int ans=0;
for(int i=0;i<n;i++){
    for(int j=n;j>0;j--){
         ans = ans+a[i][j];
         i++;j--;
        
    }
}
cout<<ans<<endl;
int solution = sum-ans;
solution = abs(solution);
cout<<solution<<endl;
return 0;
}