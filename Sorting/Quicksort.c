#include<stdio.h>
#include<stdlib.h>
int n;
void print(int a[])
{
    int i; printf("\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
void QuickSort(int a[],int First,int Last)
{
    int i,j,temp,pivot;
    if(First<Last)
    {
        //printf("\n Inside Quick Sort:");
        print(a);
        pivot=First;
        i=First,j=Last;
        while(i<j)
        {
            while(a[i]<=a[pivot] && i<Last)
            i++;
            while(a[j]> a[pivot])
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        QuickSort(a,First,j-1);
        QuickSort(a,j+1,Last);
    }
}
int main()
{
    int a[25],i;
    //int a[]={99,90,89,52,50,48,45,38,33,30,27,22,15,3,1};
    printf("How Many Element Enter:");
    scanf("%d ",&n);
    for(i=0;i<n;i++)
        a[i]=rand()%100+1;
    //print(a);
    QuickSort(a,0,n-1);
    printf("\nAfter Quick Sort:");
    print(a);
}