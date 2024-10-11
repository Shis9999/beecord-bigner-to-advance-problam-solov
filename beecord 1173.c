#include <stdio.h>

int main() {
    int v;
    scanf("%d",&v);
    int a[10];
    a[0]=v;
    for(int i = 1; i < 10; i++){
        a[i]= a[i-1]*2;
    }
    for (int i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, a[i]);
    }

    return 0;
}
