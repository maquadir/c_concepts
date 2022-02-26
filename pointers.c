#include<stdio.h>

//pointers practise code
int main(void)
{

//single pointers
int x = 123;
int *p = &x;
*p = 567;
printf("%d \n", *p);

//array pointers
int arr[] = {1,2,3,4};
int *ap = arr;
printf("Array element is %d\n ", *ap);

for( int j = 0; j < 4 ; j++){
    printf("Array elements are %d\n", ap[j]);
}

//copy array element to int pointer
int *ap1;
ap1 = &arr[2];
printf("Array element pointed before change is %d\n", *ap1);
*ap1 = 20;
 printf("Array element pointed after change is %d\n", *ap1);

for( int j = 0; j < 4 ; j++){
    printf("Array elements are %d\n", ap[j]);
}

int *ap2 = arr;
// *ap2 = &arr[0];
ap2++;
printf("Array element is %d\n", *ap2);
printf("Array element address is %p\n", ap2);

//void pointer
int y = 123;
void *v;
v = &y;
printf("Void pointer is %d\n", *((int *)v));

//using void pointer
 char c = 'a';
//  int x = 123;
 float f = 456.789f;
 char *mycharp = &c;
 int *myintp = &x;
 float *myfloatp = &f;
 printf("The value of a char pointer: %p\n", mycharp);
 printf("The value of a char pointer: %p\n", (void *)mycharp);
 printf("The value of an int pointer: %p\n", (void *)myintp);
 printf("The value of a float pointer: %p\n", (void *)myfloatp);

//string pointer
char *str = "Hello world";
printf("Pointer to string is %c\n", *str);
printf("Pointer to string is %s\n", str);

//array of string pointers
char *arrp[] = {"First","Second","Third"};
for(int i=0; i< 3; i++){
    printf("pointer array element is %s\n", arrp[i]);
}

}