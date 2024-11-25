#include<stdio.h>
int main()
{
    int a=14;
    //printf("a: %d,a: %d",a,a++);14  15
    // printf("a: %d,a: %d",++a,a);15  15 
    // printf("a: %d,a: %d",a++,a++);15  14
    //printf("a: %d,a: %d",a++,++a);15  16
    // printf("a: %d,a: %d",++a,a++);16  14
    // printf("a: %d,a: %d",++a,++a);16  16
    // printf("a: %d,a: %d,a: %d",a++,a++,a++);14  15  16
    // printf("a: %d,a: %d,a: %d",++a,a++,a++);17  15  14
    // printf("a: %d,a: %d,a: %d",++a,a++,++a);17  15  17

    // printf("a: %d,a: %d",a,a--);14  13
    // printf("a: %d,a: %d",--a,a);13  13
    // printf("a: %d,a: %d",a--,a--);13  14
    // printf("a: %d,a: %d",a--,--a);13  12
    // printf("a: %d,a: %d",--a,a--);12  14
    // printf("a: %d,a: %d",--a,--a);12  12
    // printf("a: %d,a: %d,a: %d",a--,a--,a--);12  13  14
    // printf("a: %d,a: %d,a: %d",--a,a--,a--);11  13  14
    // printf("a: %d,a: %d,a: %d",--a,a--,--a);11  13  11
}