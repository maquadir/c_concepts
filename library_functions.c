#include<stdio.h>
#include<string.h>

int main(void){

    //length of string
    const char *p = "Hello world";
    size_t strLength = strlen(p);
    printf("Length of string is %zu\n",strLength );

    //compare 2 strings
    const char *c1 = "Hellp world";
    int result = strcmp(p,c1);
    if(result == 0){
        printf("Strings match\n");
    }else if(result > 0){
        printf("left string comes after\n");
    }else{
        printf("right string comes after\n");
    }

    //concatenate strings
    char str1[60] = "Hi ";
    char str2[30] = "How are you";
    strcat(str1, str2);
    printf("concatenated string is %s\n", str1);

    //copy strings
    char resultStr[30];
    strcpy(resultStr, str1);
    printf("copied string is %s\n", resultStr);

    //find substring
    char *str3 = "Hello world";
    char *substr = "world";
    char *position = strstr(str3,substr);
    if(position != 0){
        printf("Substring found\n");
    }else{
        printf("substring not found");
    }


}