#include<stdio.h>
#include<stdlib.h>

int main(void){

    int *p = malloc(sizeof(int));
    if(p){
    printf("Allocated %zu bytes\n", sizeof *p);
    }

    printf("Reallocating allocated memory\n");

    int *pnew = realloc(p, 10 * sizeof(int));
    if(pnew){
    printf("the memory block is now %zu bytes\n", sizeof *pnew);
    free(pnew);
    }else{
        free(p);
    }

}