#include<stdio.h>
int main(){
    int x,y,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y){
        int w =x;
        x=y;
      y = w;

    }
    for(int i=x; i<=y; i++){
        if(i % 13 !=0){
            sum +=i;
        }
    }
    printf("%d\n",sum);
    return 0;
}