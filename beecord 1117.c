#include<stdio.h>
int main(){
    float a,b,sum;
    int i=0;
    while (i<2)
    {
    scanf("%f",&sum);
    if(sum>=0 && sum<=10){
        if(i==0){
            a=sum;
        }
        else{
            b=sum;
        }
        i++;
    }
    else{
        printf("nota invalida\n");
    }
    }
    float x= (a+b) /2.0;
    printf("media = %.2f\n",x);
    return 0;
}