#include<stdio.h>

void man(int boss);

int main(){
man(10);
return 0;

}

void man(int boss){
    if(boss ==0){
    return;
    }

printf("my name is shis\n");
man(boss-1);
}
