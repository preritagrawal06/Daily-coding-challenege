#include<stdio.h>
int lonelyinteger(int size, int* a) {
    int res = 0;
    for(int i=0; i<size; i++){
        res = res^a[i];
    }
    return res;

}
int main() {
    int res;
    
    int size, ai;
    scanf("%d", &size);
    int a[size];
    for(ai = 0; ai < size; ai++) { 
        int item;
        scanf("%d", &item);
        
        a[ai] = item;
    }
    
    res = lonelyinteger(size, a);
    printf("%d", res);
    
    return 0;
}
