#include<stdio.h>
#define n 8
int a[n],top=-1;
int display()
{
    if(top < 0)
    {
            printf("Array is empty");
    }
    else
    {
            for(int i=0;i<=top;i++)
            {
                printf("%d ",a[i]);
            }
    }
    printf("\n");
}
int insertEnd(int val)
{
    if(top>=n-1)
    {
        printf("Array is full\n");
    }
    else
    {
        top++;
        a[top]=val;
    }
}
int DeleteEnd(int val)
{
    if(top<0)
    {
        printf("Array is empty\n");
    }
    else
    {
        a[top]=val;
        top--;
    }
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    DeleteEnd(40);
    display();
}