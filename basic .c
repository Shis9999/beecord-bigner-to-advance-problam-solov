#include<stdio.h>
int main() {
int age[5], i;

for(i=0; i<5; i++){
    printf("enter %d number: ",i+1);
    scanf("%d",&age[i]);
}
for(i=0; i<5; i++) {
    printf("%d number: %d\n",age[i]);
}

return 0;

}
