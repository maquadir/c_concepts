#include<stdio.h>

int main(void){

    printf("Enter a string : ");
    char str[20];
    if(fgets(str, 20, stdin) != NULL){
        printf("you have entered %s\n", str);
    } else{
        printf("Failure. No characters are read.\n");
    }

}