#include<stdio.h>
int l,r,a[10],swapp;
int selection_sort()
{
    for(r=0;r<10;r++)
    {
        for(l=0;l<10;l++)
        {
            if(a[l]>a[r])
            {
                swapp=a[l];
                a[l]=a[r];
                a[r]=swapp;
            }
        }
    }
}
int display()
{
    printf("\nSorted Array:");
    for(l=0;l<10;l++)
    {
        printf("%d ",a[l]);
    }
}
int main()
{
    for(l=0;l<10;l++)
    {
        a[l] = rand() %50;
        printf("%d ",a[l]);
    }
    selection_sort();
    display();
}

