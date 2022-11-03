#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int a[5];
  for (int i = 0; i < 5; i++){
    cin >> a[i];
  };
  int m= a[0], ma= a[0];
  long long sum = a[0];
  for (int i = 1; i < 5; i++) {
    m= min(m, a[i]);
    ma = max(ma, a[i]);
    sum = sum+a[i];
  }
  cout << sum - ma << " " << sum - m << endl;
  return 0;
}