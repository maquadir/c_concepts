#include<stdio.h>
#include<stdlib.h>

int main(void){
    int *p = calloc(1, sizeof(int));
    if(p){
        printf("The initial value is %d\n", *p);
        *p = 123;
        printf("The value after change is %d\n", *p);
    }
    free(p);

    int *ap = calloc(5, sizeof(int));
    if(ap){
        printf("Initial values are\n");
        for(int i=0; i< 5;i++){
            printf(" %d ",ap[i]);
        }
        printf("\nNew values are \n");
        for(int i=0; i<5; i++){
            ap[i] = (i+1)*10;
            printf(" %d ", ap[i]);
        }
    }
    free(ap);

}