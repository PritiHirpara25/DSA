#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void insertEnd(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));

    temp->data=val;

    if(head == NULL)
    {
        head = temp;
        temp->next=head;
    }
    else
    {
        while(ptr->next != head)
        {
            ptr=ptr->next;   
        }
        ptr->next=temp;
        temp->next=head;
    }
}

void deleteEnd()
{
    struct node *ptr=head;
    struct node *p;

    if(head == NULL)
    {
        printf("List is already empty...");
    }
    else if(head ->next == head)
    {
        head = NULL;
        free(head);
    }

    while(ptr->next != head)
    {
        p=ptr;
        ptr=ptr->next;
    }
    p->next = ptr->next;
    free(ptr);
}

void insertFirst(int val)
{
    struct node *ptr=head;
    struct node *temp=malloc(sizeof(struct node));

    temp->data=val;
    temp->next=NULL;

    if(head == NULL)
    {
        head = temp;
        temp->next=head;
    }
    else
    {
        head->next=temp;
        temp->next=head;
        head=temp;
    }
}

void deleteFirst()  
{
    struct node *ptr =head;
    struct node *temp=head;
    
    if(ptr==NULL)
    {
        printf("linked list is empty");
    }
    else if(head->next == head)
    {
        head=NULL;
        free(head);
    }
    else
    {
        while(ptr->next != head)
        {
            ptr=ptr->next;
            ptr->next=temp->next;
            head=temp->next;
            free(temp);
            return;
        }
    }
}

int deleteMid(int posi)
{
    struct node*ptr=head;
    struct node *p;

    if(head == NULL)
    {
        printf("List is already empty...");
    }
    else
    {
        while(ptr->data != posi)
        {
            p=ptr;
            ptr=ptr->next;
        }
        p->next=ptr->next;
        free(ptr);
    }
}

void display()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("List is empty...");
    }
    else
    {
        while(ptr->next != head)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("%d",ptr->data);
    }
    printf("\n");
}

int main()
{
    insertEnd(100);
    insertEnd(200);
    insertEnd(300);
    insertEnd(400);
    // insertFirst(500);
    // deleteMid(300);
    // deleteEnd();
    deleteFirst();
    display();

    // int ch,p;
    // printf("1.insert element First position:"); 
    // printf("\n2.insert element last position:"); 
    // printf("\n3.delete element  First position:"); 
    // printf("\n4.delete element last position:"); 
    // printf("\n5.insert element mid posiiton:");
    // printf("\n6.delete element mid posiiton:");
    // printf("\n7.display List");
    // printf("\n0.exit");

    // while(ch!=0)
    // {
    //     printf("\nEnter your choice..");
    //     scanf("%d",&ch);
    //     switch(ch)
    //     {
    //         case 1:
    //             printf("Enter element=");
    //             scanf("%d ",&p);
    //             insertFirst(p);
    //             break; 
    //         case 2:
    //             printf("Enter element=");
    //             scanf("%d ",&p);
    //             insertEnd(p);
    //             break;    
    //         case 3:
    //             deleteFirst(p);
    //             break;
    //         case 4:
    //             deleteEnd(p);
    //             break;
    //         case 5:
    //             insertMid(p);
    //             break;
    //         case 6:
    //             deleteMid(p);
    //             break;
    //         case 7:
    //             display();
    //             break;  
    //         case 0: 
    //             break;
    //         default:
    //             printf("wrong choice..");
    //             break;
    //     }
    // }
}