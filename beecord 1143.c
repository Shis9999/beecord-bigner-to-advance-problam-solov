#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        int y=i*i;
        printf("%d %d %d\n",i, y, i*y);
    }
    return 0;
}