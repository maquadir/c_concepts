#include<stdio.h>

//random exercises
int main(void){

    char arr[] = "Hello World";
    printf("Value of array is %s\n", arr);

    int iarr[] = {1,2,3,4,5};
    iarr[0] = 10;
    iarr[4] = 50;
    for (int i = 0; i < 5; i++)
      {
            printf("%d\n ", iarr[i]);
      }

    double d = 10.456;
    double *dp = &d;
    printf("Value of double variable is %f\n", *dp);

    *dp = 14.567;  
    printf("Value of double variable after change is %f\n", *dp);

    int arr2[] = {1,2,3,4,5};
    int *pa = arr2;
    for(int i=0; i<5;i++){
        printf("Array elementd are %d\n", pa[i]);
    }

    char *cp = "Salaam bhai";
    printf("the string is %s\n", cp);

    int iarr3[] = {10, 20, 30, 40, 50};
    int *ip = iarr3;
    ip += 2;
    printf("Third element is %d\n", *ip);
    ip += 1;
    printf("fourth element is %d\n", *ip);

    char *sp[] = {"This is the first sentence.",
                   "This is the second sentence.",
                   "This is the third sentence.",
                   "This is the last sentence."};
    for(int i = 0; i< 4; i++){
        printf("statements are %s\n",sp[i] );
        printf("stmt initials are %c\n",*sp[i] );
    }

}