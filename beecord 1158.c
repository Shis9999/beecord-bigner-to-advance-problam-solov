#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d",&c);
    for(int i=0; i<c;i++){
        scanf("%d %d",&a,&b);
        if(a%2==0){
            a++;
        }
        int sum=0;
        for(int j=0; j<b; j++){
            sum +=a;
            a +=2;
        }
        printf("%d\n",sum);
    }
    return 0;


}