#include<stdio.h>
#define n 5
int f=-1,r=-1,a[n],i;
int display()
{
    if(f<0)
    {
        printf("Queue is empty..");
    }
    else
    {
        for(i=f;i<=r;i++)
        {
            printf("%d ",a[i]);
        }
    }
}
//Simple queue
int insertEnd(int val)
{
    if(r>=n-1)
    {
        printf("Queue is full..");
    }
    else if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
    else
    {
        r++;
        a[r]=val;
    }
}
int deleteFirst()
{
    if(f<0)
    {
        printf("Queue is empty..");
    }
    else if (f == r)
    {
        f = r = -1;
    }
    else
    {
        f++;
    }
}
//De-queue
int insertFirst(int val)
{
    if(f == 0)
    {
        printf("Queue is not insert at that time\n");
    }
    else if(f<0)
    {
        f=r=0;
        a[f]=val;
    }
    else
    {
        f--;
        a[f]=val;
    }
}
int deleteEnd()
{
    if(r<0)
    {
        printf("Queue is empty..\n");
    }
    else if (r == f)
    {
        f = r = -1;
    }
    else
    {
        r--;
    }
}
int main()
{
    int ch,p;
    printf("\n1.insert last element:");
    printf("\n2.delete first element:");
    printf("\n3.insert first element:");
    printf("\n4.delete last element:");
    printf("\n5.display queue");
    printf("\n0.exit");
    while(ch != 0)
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter element:");
                scanf("%d",&p);
                insertEnd(p);
                break;
            case 2:
                deleteFirst();
                break;
            case 3:
                printf("Enter element:");
                scanf("%d",&p);
                insertFirst(p);
                break;
            case 4:
                deleteEnd();
                break;
            case 5:
                display();
                break;
            case 0:
                break;
            default:
                printf("Wrong choice..");
                break;
        }
    }
}

