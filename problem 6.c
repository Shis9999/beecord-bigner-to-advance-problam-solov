#include <stdio.h>
int main(){
    int n;
scanf("%d",&n);
int array[n];
for(int i = 0; i < n; i++) {
    scanf("%d",&array[i]);
}
long long array2[n];
int x=n-1;
for(int i = x; i >=0; i--) {
    // printf("%d ",array[i]);
array2[i]=array[i];

}

if(array2[i] == array[i]){
    printf("YES\n");
}
else{
    printf("NO\n");
}
return 0;

}