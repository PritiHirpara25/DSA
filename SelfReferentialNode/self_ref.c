#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};
int main()
{
    struct node a,b,c,d,e;
    
    a.data=65;
    a.ch='A';
    // printf("Data of a is: %d\n",a.data);
    // printf("char of a is: %c\n",a.ch);

    b.data=97;
    b.ch='a';
    // printf("Data of b is:%d\n",b.data);    
    // printf("char of b is:%c\n",b.ch);    

    c.data=102;
    c.ch='P';
    // printf("Data of c is:%d\n",c.data);    
    // printf("char of c is:%c\n",c.ch);    

    d.data=254;
    d.ch='i';
    // printf("Data of d is:%d\n",d.data);    
    // printf("char of d is:%c\n",d.ch); 

    e.data=456;
    e.ch='H';
    // printf("Data of e is:%d\n",e.data);
    // printf("char of e is:%c\n",e.ch);

    b.ptr=&a;
    printf("Data of a is:%d\n",b.ptr->data);
    printf("char of a is:%c\n",b.ptr->ch);

    a.ptr=&b;
    printf("Data of b is:%d\n",a.ptr->data);
    printf("char of b is:%c\n",a.ptr->ch);

    b.ptr=&c;
    printf("Data of c is:%d\n",b.ptr->data);
    printf("char of c is:%c\n",b.ptr->ch);

    c.ptr=&d;
    printf("Data of d is:%d\n",c.ptr->data);
    printf("char of d is:%c\n",c.ptr->ch);

    d.ptr=&e;
    printf("Data of e is:%d\n",d.ptr->data);
    printf("char of e is:%c",d.ptr->ch);
}