#include<stdio.h>
int main()
 {
   int a[2],b[2],c[4],i;
   for(i=0;i<2;i++)
   {
        printf("Enter first number: ");
        scanf("%d",&a[i]);
   }
   for(i=0;i<2;i++)
   {
        printf("Enter second number: ");
        scanf("%d",&b[i]);
   }
   printf("\nMerge array: ");
   for(i=0;i<2;i++)
   {
         c[i]=a[i];
         c[i+2]=b[i];
   }
   for(i=0;i<4;i++)
   {
        printf(" %d",c[i]);
   }
 }