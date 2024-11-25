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
int insertFirst(int val)
{
    if(top>=n-1)
    {
        printf("Array Is Full");
    }
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            a[i] = a[i-1];
        }   
        a[0] = val;
        top++;
        printf("Insert Element = %d\n",val);
    }
}
int main()
{
    insertFirst(50);
    insertFirst(40);
    insertFirst(30);
    insertFirst(20);
    insertFirst(10);
    display();
} 