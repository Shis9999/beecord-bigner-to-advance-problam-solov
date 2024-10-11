#include<stdio.h>
int main() {
int arr[100],sum=0, num,avg, i;
    printf("enter the size of array: ");
    scanf("%d",&num);
    for(i=0; i<num; i++){
        printf("enter %d number: ", i+1);
        scanf("%d", &arr[i]);
        sum +=arr[i];

    }
    avg= sum/num;
    printf("Avarage : %d ", avg);
    return 0;
}
