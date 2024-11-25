#include<stdio.h>
int a[10];
int bubbleSort()
{
    int i,j,p;
    for(int j=0;j<10;j++)
    {
        for(int i=0;i<10;i++)
        {
            if(a[i]>a[j])
            {
                p = a[i];
                a[i] = a[j];
                a[j] = p;
            }
        }
    }
    printf("\nSorted array:");
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    for(int i=0;i<10;i++)
    {
        a[i] = rand() %50;
        printf("%d ",a[i]);
    }
    bubbleSort();
}
