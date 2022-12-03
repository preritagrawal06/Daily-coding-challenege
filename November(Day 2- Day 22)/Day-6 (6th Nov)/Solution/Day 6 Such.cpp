#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>

#define MAX 100010

using namespace std;

int a[MAX];

int main() {
    int n, m, k, x, i;

    while (~scanf("%d %d %d", &n, &k, &m)) {
        k %= n;
        for (i = 0; i < n; ++i) scanf("%d", &a[i]);
        reverse(a, a + n - k);
        reverse(a + n - k, a + n);
        reverse(a, a + n);
        while (m--) {
            scanf("%d", &x);
            printf("%d\n", a[x]);
        }
    }

    return 0;
}
