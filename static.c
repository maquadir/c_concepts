#include<stdio.h>

void counter();
int main(void){

    counter();


}


void counter(){
    static int x = 10;
    printf("value of x is %d\n", x);
}