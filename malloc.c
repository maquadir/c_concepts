#include<stdio.h>
#include<stdlib.h>

typedef struct{
    int x;
    char c;
    double d;
} myStruct;

int main(void){

    int *p = malloc(sizeof(int)); 
    //(or) int  *p = malloc(sizeof *p);
  
    
    if(p){
          *p = 123;
          printf("The value is: %d\n", *p);
    }else{
        printf("interger is not allocated");
    }

    //check if malloc return is NULL
    if(p == NULL){
        printf("error allocating memory");
        return -1;
    }
    *p = 123;

    //free the allocated memory to avoid memory leak
    free(p);
    p = NULL;


    //allocates space for five integers, sets the values of all five members, and frees the memory once done:
    int *numbers = malloc(5 * sizeof(int));
    if(numbers){
        numbers[0] = 1;
        numbers[1] = 2;
        numbers[2] = 3;
        numbers[3] = 4;
        numbers[4] = 5;
        printf("Allocated memory for 5 integers\n");
        for(int i=0; i< 5; i++){
            printf("%d\n", numbers[i]);
        }
    }
    free(numbers);

    //allocate memory for char
    char *c = malloc(sizeof(char));
    if(c){
        *c = 'a';
        printf("allocated mem for char\n %c", *c);
    }
    free(c);

    //allocate memory for structure
    myStruct *ms = malloc(sizeof(myStruct));
    if(ms){
        ms->x = 1;
        ms->c = 'a';
        ms->d = 123.456;
        printf("allocated to srructure \n %d %c %f", ms->x, ms->c, ms->d);
    }
    free(ms);
    
}