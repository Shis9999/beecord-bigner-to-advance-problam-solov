#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){
    int x=5;
    int *p;
    p = &x;
    printf("%d\n",*p);
    printf("%lu",&x);
    return 0;
}