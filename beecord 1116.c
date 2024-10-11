#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b;
    int i=1;
    while(i<=n){
        scanf("%d %d",&a,&b);
        if(b==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1f\n",(float) a/b);
        }
        i++;
    }
    return 0;
}