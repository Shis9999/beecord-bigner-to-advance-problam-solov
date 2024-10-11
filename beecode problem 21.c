#include<stdio.h>

int main(){
double n;
int value, notes, coin;
scanf("%lf",&n);
value = n * 100;
printf("NOTAS\n");
notes = value / (100*100);
printf("%d nota(s) de R$ 100.00\n",notes);
value %=(100*100);

notes = value / (50*100);
printf("%d nota(s) de R$ 50.00\n",notes);
value %= (50*100);

notes = value / (20*100);
printf("%d nota(s) de R$ 20.00\n", notes);
value %= (20*100);

notes = value / (10*100);
printf("%d nota(s) de R$ 10.00\n",  notes);
value %=(10*100);

notes = value / (5*100);
printf("%d nota(s) de R$ 5.00\n",notes);
value %= (5*100);

notes = value / (2*100);
printf("%d nota(s) de R$ 2.00\n", notes);
value %= (2*100);

printf("MOEDAS\n");

coin = value / (1*100);
printf("%d moedas(s) de R$ 1.00\n",coin);
value %= (1*100);
coin = value / (0.50 *100);
printf("%d moedas(s) de R$ 0.50\n",coin);
value %= 50;
coin = value / (0.25*100);
printf("%d moedas(s) de R$ 0.25\n", coin);
value %=25;

coin = value / (0.10 * 100);
printf("%d moedas(s) de R$ o.10\n",coin);
value %= 10;

coin = value / (0.05 * 100);
printf("%d moedas(s) de R$ 0.05\n",coin);
value %=5;

coin = value / (0.01*100);
printf("%d moedas(s) de R$ 0.01\n",coin);
return 0;
}
