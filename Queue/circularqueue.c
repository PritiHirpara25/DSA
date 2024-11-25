#include<stdio.h>
#define n 5
int f=-1,r=-1,a[n],i;
int display()
{
    int i=f;
    if(f<0)
    {
        printf("Queue is empty..\n");
    }
    else
    {
        do        
        {
            printf("%d ",a[i]);
            i=(i+1)%n;
        }while(i != (r+1) % n);
    }
}
int insertEnd(int val)
{
    if((r+1)%n==f)
    {
        printf("Queue is full..\n");
    }
    else if(r<0)
    {
        f=r=0;
        a[r]=val;
    }
    else
    {
        r=(r+1)%n;
        a[r]=val;
    }
}
int delete()
{
    if(f<0)
    {
        printf("queue is empty..");
    }
    else if (f == r)
    {
        f = -1 , r = -1;
    }
    else
    {
        f=(f+1)%n;
    }
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    delete(10);
    insertEnd(22);
    display();
}

