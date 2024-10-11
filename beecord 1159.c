#include<stdio.h>
int main(){
    int x;
    int sum;
    while(1){
    scanf("%d",&x);
    if(x==0){
        break;
    }
    if(x % 2 == 1){
        x++;
    }
    sum=0;
    int b=0;
    for(int i=0; b < 5; i++){
        sum +=(x + i * 2);
        b++;
    }
        printf("%d\n",sum);
    }
return 0;
}