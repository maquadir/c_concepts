#include<stdio.h>
#include<string.h>

int main(void){

    char c[] = "Hello World";
    char *p = memchr(c, 'W', strlen(c));
    if(p != NULL){
        printf("character found at %s\n", p);
    }else{
        printf("character not found");
    }
}