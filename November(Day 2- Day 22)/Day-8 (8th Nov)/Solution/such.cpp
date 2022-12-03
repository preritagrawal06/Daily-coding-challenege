#include <bits/stdc++.h>
#define MAX 100;
using namespace std;
string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

void diagonalDifference(int n, int a[100][100] ) {
    int s1 = 0;
    int s2 = 0;
    
    for(int i=0;i<n;i++) {        
        s1 += a[i][i];
        s2 += a[i][n-i-1];
    }
    cout<< abs(s1 - s2)<<endl; 
}
int main(){
int n;
cin>>n;
int a[n][100];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
} 
diagonalDifference( n, a);


return 0;
}
