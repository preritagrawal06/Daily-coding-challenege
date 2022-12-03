#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() { 
    int sum = 0;
    int n, d;
    
    scanf("%d %d", &n, &d);
    int s[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    
    for(int i = 0; i < n-2; ++i) {
        for(int j = i+1; j < n-1; ++j) {
            if(s[j]-s[i] == d) {
                for(int k = i+2; k < n; ++k) {
                    if(s[k]-s[j] == d) {
                        ++sum;
                        break;
                    }
                }
                break;
            }
        }
    }
    printf("%d", sum);
    return 0;
}
