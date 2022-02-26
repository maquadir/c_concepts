#include<stdio.h>

//different ways to use structures
struct Mystruct{
    int x;
    char c;
    double d;
} s = {3,'t', 456.67};

struct Mystruct1{
      int x;
    char c;
    double d;
};

// typedef struct Mystruct2 Mystruct;

// struct Mystruct2{
//         int x;
//     char c;
//     double d;
// };

typedef struct{
        int x;
    char c;
    double d;
} Mystruct2;

 typedef struct {
    int x;
    char c;
    double d;
}st;

typedef struct{
    int x;
    char c;
    float f;
} sf;


void structureFun(st myparameter);
sf structFunc(int xparam, char cparam, float fparam);
void pointerFunc(sf *sp);
int main(void){

    // struct Mystruct1 s;
    // Mystruct s1;
    Mystruct2 s2 = {1,'c', 34.567};
    Mystruct2 s3 = {.c = 'a', .x=3, .d = 45.678};
    Mystruct2 *ps = &s2;
    st s4 = {1,'c', 34.567};;
    printf("structure elements are %d %c %f\n", s2.x,s2.c,s2.d);
    printf("structure elements are %d %c %f\n", s3.x,s3.c,s3.d);
    printf("structure elements are %d %c %f\n", s.x,s.c,s.d);
    printf("structure elements are %d %c %f\n", (*ps).x,(*ps).c,(*ps).d);
    printf("structure elements are %d %c %f\n", ps->x,ps->c,ps->d);
    structureFun(s4);
    sf svalue = structFunc(2, 'd', 45.5);
    printf("structure elements are %d %c %f\n", svalue.x,svalue.c,svalue.f);
    sf structPoint = {1, 'r', 45.6};
    pointerFunc(&structPoint);
}

void structureFun(st myparameter){
      printf("structure elements are %d %c %f\n", myparameter.x,myparameter.c,myparameter.d);
}

sf structFunc(int xparam, char cparam, float fparam){
    sf temps;
    temps.x = xparam;
    temps.c = cparam;
    temps.f = fparam;
    return temps;
}

void pointerFunc(sf *sp){
     printf("structure elements are %d %c %f\n", sp->x,sp->c,sp->f);
}