#include<stdio.h>

int mySum(int a, int b){
    return printf("%d\n",a + b);
}

void printMessage(void){
    printf("Hello World\n");
}

int mySubstract(int x, int y);
void change(int *p);
int main(void){

printMessage();
mySum(1,2);

int y = 6;
 printf("value before change %d\n",y );
change(&y);
printf("value after change %d\n",y );
}


void change(int *p){
    *p = 7;
}
