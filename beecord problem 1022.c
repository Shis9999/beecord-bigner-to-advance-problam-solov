#include<stdio.h>
int main(){
    float a,b, c, d, sum, e;
    double avg1,avg2;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    sum = (a*2+ b*3 + c*4 + d*1) / 10;

    printf("Media : %.1f\n",sum);
if(sum>=7.0){
        printf("Aluno aprovado\n");
    }
else if(sum < 5.0){
        printf("Aluno aprovado\n");
    }
else{
        printf("Aluno em exam\n");
    scanf("%f",&e);
    printf("Nota do exam : %.1f\n",e);
    avg1 =(sum + e) / 2;
if(avg1>= 5.0){
        printf("Aluno aprovado\n");
    }
else{
        printf("Aluno aprovado\n");
    }
    printf("Media final : %.1f\n",avg1);
    }

    
    return 0;

}