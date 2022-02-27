#include<stdio.h>
#include<stdlib.h>

int main(void){

    double *d = malloc(sizeof(double));
    if(d){
        *d = 23.456;
        printf("value of double is %f\n ", *d);
    }
    free(d);

    int *i = malloc(sizeof *i);
    if(i){
        *i = 123;
         printf("value of int is %d\n ", *i);    
    }
    free(i);

    double *ad = malloc(5 * sizeof(double));
    if(ad){
       for (int i = 0; i < 5; i++)
            {
                  ad[i] = i;
                  printf("%.2f ", ad[i]);
            }

    }
    free(ad);

    int *ai = malloc(5 * sizeof(int));
    if(ai){
        for (int i = 0; i < 5; i++)
            {
                  ai[i] = i;
                  printf("%d ", ai[i]);
            }
    }
    int *ain = realloc(ai, 10 * sizeof(int));
    if(ain){
        printf("\nResizing allocated memory...\n");
        printf("The memory block is now %zu bytes long.\n", 10 * sizeof(int));
        // resizing successful, free the realloc pointer
        free(ain);
    }else{
        free(ai);
    }

}