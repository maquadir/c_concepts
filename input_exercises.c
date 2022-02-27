#include<stdio.h>


int main(void){
    printf("Enter the variables :");
    int x;
    double d;
    char buff[50];

    if(fgets(buff, 50 , stdin) != NULL){
        sscanf(buff, "%d %lf",&x,&d);
        printf("you have entered %d %lf\n", x, d);
    }
    else
    {
        printf("No characters read\n");
    }

    char c = 'A';
      int x1 = 123;
      double d1 = 456.789;
      size_t size = sizeof(long);
      int *p = &x1;
      long l = 12345678910L;
      char str[] = "Hello World!";
      printf("Type char: %c\n", c);
      printf("Type int: %d\n", x1);
      printf("Type double: %f\n", d1);
      printf("Type size_t: %zu\n", size);
      printf("Pointer type: %p\n", (void *)p);
      printf("Type long: %ld\n", l);
      printf("Character array: %s\n", str);
}