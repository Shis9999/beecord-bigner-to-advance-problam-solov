#include<stdio.h>
int main(){
    int x,z,contdown=0;
    int sum=0;
    scanf("%d",&x);
    do{
        scanf("%d",&z);
    }while(z <=x);
    for(int i=x; sum <=z; i++){
        
        sum +=i;
        contdown++;
    }
    printf("%d\n",contdown);
    return 0;
}