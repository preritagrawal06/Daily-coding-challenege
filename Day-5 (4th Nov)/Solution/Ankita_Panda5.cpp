#include <iostream>
using namespace std;
int A(int n, int p)
{
    if(p == 1 || p == n)
    {
        return 0;
    }
    int ans =  1 + (p-2)/2;
    
    if(n%2 == 0){
        return min(ans, (int)(1 + (n-p-1)/2));    
    }
    
    return min((int)(n-p)/2, ans);
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int ans = A(n, p);
    cout << ans << endl;
    return 0;
}
