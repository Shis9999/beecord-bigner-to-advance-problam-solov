#include<stdio.h>
int main(){
    int tottal=0;
    int op;
    int inte,gre,inter=0,gremio=0,drow=0;
    do{
        scanf("%d %d",&inte,&gre);
        if(inte>gre){
            inter++;
        }
        else if(gre>inte){
            gremio++;
        }
        else{
            drow++;
        }
        tottal++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&op);
    }while(op==1);
    printf("%d grenais\n",tottal);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",drow);
    if(inter>gremio){
        printf("Inter venceu mais\n");
    }
    else if(gremio>inter){
        printf("Gremio venceu mais\n");
    }
    else{
        printf("Não houve vencedor\n");
    }
    return 0;
}