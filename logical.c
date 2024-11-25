// && =>first operand 0 than no update second operand
// || =>first operand 1 than no update second operand
#include<stdio.h>
int main()
{
    int a=1,b=2,c;
    c= ++a && b;  //2  2 1
    printf("\na: %d , b: %d , c: %d",a,b,c);
    c= ++a && b;
    printf("\na: %d , b: %d , c: %d",a,b,c);
    c= --a && b;
    printf("\na: %d , b: %d , c: %d",a,b,c);
    c= ++a && --b;
    printf("\na: %d , b: %d , c: %d",a,b,c);
    c= ++a && ++b;
    printf("\na: %d , b: %d , c: %d",a,b,c);
    c= --a && --b;
    printf("\na: %d , b: %d , c: %d",a,b,c);

    // c= a && b; 
    // printf("\na: %d , b: %d , c: %d",a,b,c);
    // c= ++a && b; 
    // printf("\na: %d , b: %d , c: %d",a,b,c);
    // c= a && ++b; 
    // printf("\na: %d , b: %d , c: %d",a,b,c);
    // c= a && --b; 
    // printf("\na: %d , b: %d , c: %d",a,b,c);
    // c= --a && ++b; 
    // printf("\na: %d , b: %d , c: %d",a,b,c);
    // c= --a && --b; 
    // printf("\na: %d , b: %d , c: %d",a,b,c);

    //int a=1,b=2,c,d=2;
    // c= --a || b;
    // printf("a: %d , b: %d , c: %d",a,b,c);
    // c= ++a || b;
    // printf("a: %d , b: %d , c: %d",a,b,c);
    // c= ++a || ++b;
    // printf("a: %d , b: %d , c: %d",a,b,c);
    // c= a || ++b;
    // printf("a: %d , b: %d , c: %d",a,b,c);
    // c= --a || ++b && ++d;  //0 3 1 3
    // printf("a: %d , b: %d , c: %d , d: %d",a,b,c,d);
}