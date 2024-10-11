#include<stdio.h>
int main(){
    int x,sum=0, contdwon=0;
    float avrege;
    while(1){
        scanf("%d",&x);
        if(x<0){
            break;
        }
        sum += x;
        contdwon++;

    }
    if(contdwon > 0){
    avrege=(float)sum / contdwon;
    printf("%.2f\n",avrege);
    }


    return 0;
}