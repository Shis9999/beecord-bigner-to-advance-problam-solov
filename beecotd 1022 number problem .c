#include<stdio.h>
#include <math.h>

int main(){
double a, b,c;
scanf("%lf %lf %lf",&a,&b,&c);
double d;
if(a==0 || d<0){
    printf("Impossivel calcular");

}
else{
double ab,ad;
d=(b*b) - (4*a*b);

ab = (-b + sqrt(d)) / (2*a);
ad = (-b - sqrt(d)) / (2*a);

printf("R1 = %.5lf\n",ab);
printf("R2 = %.5lf\n",ad);

}
return 0;

}

