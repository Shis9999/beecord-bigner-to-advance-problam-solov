#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 1; i <= n; i++) {
        scanf("%d",&a[i]);
    }
    int condown=0;
    int x = __INT_MAX__;
    for(int i = 1; i <= n; i++) {
        if(a[i] < x){
            x = a[i];
            condown = i;
        }
    }
    printf("%d %d\n",x,condown);
    return 0;
}