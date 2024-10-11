#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main(){
int n;
scanf("%d",&n);
int i;
for(i=1; i<=(n-i + 1); i++){
    if(i % 5== 0){
        printf("%d Yes\n",i);
    }
    else{
        printf("%d No\n",i);
    }
}

    return 0;
}