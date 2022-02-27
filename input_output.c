#include<stdio.h>

int main(void){

    //using scanf
    printf("Enter a character: ");
    char c;
    scanf("%c",&c);
    printf("you entered : %c\n", c);

     printf("Enter an integer: ");
    int i;
    scanf("%d",&i);
    printf("you entered : %d\n", i);

     printf("Enter an int and double: ");
    int i1;
    double d;
    scanf("%d %lf",&i1, &d);
    printf("you entered : %d %f\n", i1, d);

     char buff[50] = "A 123 456.789";
      char c1;
      int x;
      double d1;
      sscanf(buff, "%c %d %lf", &c1, &x, &d1);
      printf("The values are: %c, %d and %lf\n", c1, x, d1);
}