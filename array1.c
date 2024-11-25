// // 1 2 3 4 5
// // o/p:2 3 4 5 1
// #include<stdio.h>
// int main()
// {
//     int a[5]={10,20,30,40,50},i,p;
//     p=a[0];
//     for(i=0;i<5;i++)
//     {
//         a[i] = a[i+1];
//     }
//     a[5-1] = p;
//     for(i=0;i<5;i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

#include <stdio.h>
#define n 10
int main()
{
    int i,a[5],d=a[0];
   for (i = 0; i < 5; i++)
   {
        printf("enter array :\n");
        scanf("%d", &a[i]);
   }
    printf("enter the value :\n");
    for (i = 0; i < 5; i++)
    {
        a[i] = a[i + 1];
    }
    a[5 - 1] = d;
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}