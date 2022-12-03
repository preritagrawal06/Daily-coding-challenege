#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin>>N;
  int arr[10][10];
  for (int i = 0; i < N; i++) 
    for (int j = 0; j < N; j++) 
      cin>>arr[i][j];

  int D1 = 0;
  for (int i = 0; i < N; i++) 
    D1+=arr[i][i];

  int D2 = 0;
  for (int i = 0; i < N; i++) 
    D2+=arr[i][N-i-1];
    
  cout<<abs(D1-D2);
  return 0;
}
