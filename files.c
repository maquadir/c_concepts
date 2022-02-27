#include<stdio.h>

int main(void){
    char str[100];

    //file input
    FILE *fp = fopen("/Users/adeem/Desktop/C Programs/c_concepts/myFile.txt", "r");
    if(!fp){
        printf("Error opening file\n");
    }
    while(fgets(str, 100, fp) != NULL){
        printf("%s",str);
    }
    fclose(fp);


    //file output
    FILE *fpw = fopen("/Users/adeem/Desktop/C Programs/c_concepts/myFile.txt", "w");
    if(!fpw){
        printf("Error opening file\n");
    } else{
        fprintf(fpw, "%s", "Hello nice to meet you");
        fclose(fp);
    }

    

}