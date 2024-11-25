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
int DeleteFirst(int val)
{
    if(top==-1)
    {
        printf("Array Is Empty");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            a[i] = a[i+1]; 
        }
        top--;
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
    int ch, p;

    printf("1.insert element first position ..");
    printf("\n2.insert element last position ..");
    printf("\n3.delete element at first position ..");
    printf("\n4.delete element at last position ..");
    printf("\n5.display array..");
    printf("\n0.exit");
    while(ch != 0)
    {
        printf("\nenter your choice = ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("enter element = ");
            scanf("%d", &p);
            insertFirst(p);
            break;
        case 2:
            printf("enter element = ");
            scanf("%d", &p);
            insertEnd(p);
            break;
        case 3:
            DeleteFirst(p);
            break;
        case 4:
            DeleteEnd(p);
            break;
        case 5:
            display();
            break;
        case 0:
            break;
        default:
            printf("wrong choice..");
            break;
        }
    }
}