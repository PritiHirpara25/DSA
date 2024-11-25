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
int delete()
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
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    delete(10);
    display();
}

