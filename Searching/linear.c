#include<stdio.h>
#include<stdlib.h>
int a[20];
int linear_search(int b)
{
    int i;
    for(i=0;i<20;i++)
    {
        if(a[i] == b)
        {
            printf("%d ",i);
            break;
        }
    }
    if(i == 20)
    {
        printf("NOT FOUND..");
    }
}
int main()
{
    int b;
    for(int i=0;i<20;i++)
    {
        a[i] = rand() %50;
        printf("%d ",a[i]);
    }
    printf("\nEnter Number :- ");
    scanf("%d",&b);
    linear_search(b);
}