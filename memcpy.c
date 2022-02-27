#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int x;
    char c;
    double d;
} myStruct;

int main(void){

    //copy from string to another string
    char source[] = "Hello world";
    char destination[5];
    memcpy(destination, source, sizeof destination);
    printf("The source is: %s\n", source);
    printf("The destination after copying 5 characters is:\n");
    for(size_t i = 0; i< sizeof destination; i++){
        putchar(destination[i]);
    }

    //copy from int array to another
    int myArr[] = {10,20,30,40,50};
    int *p = malloc(5 * sizeof(int));
    memcpy(p, myArr, 5 * sizeof(int));
     printf("Copied bytes from an array to an allocated space. The values are:\n");
      for (int i = 0; i < 5; i++)
      {
            printf("%d ", p[i]);
      }
      free(p);

    //copy from one struct to another
    myStruct source1, destination1;
    source1.x = 1;
    source1.c = 'c';
    source1.d = 45.678;
    memcpy(&destination1, &source1, sizeof(destination1));
      printf("The result after copying bytes from source to destination:\n");
      printf("Member destination.c has a value of: %c\n", destination1.c);
      printf("Member destination.x has a value of: %d\n", destination1.x);
      printf("Member destination.d has a value of: %f\n", destination1.d);

}