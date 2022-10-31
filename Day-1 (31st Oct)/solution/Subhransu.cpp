#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if(n>=38 && n%5==3){
            n+=2;
        }
        else if(n>=38 && n%5==4){
            n+=1;
        }
        cout << n << endl;
    }
    
}

//date: 31/10/2022