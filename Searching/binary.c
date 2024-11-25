#include<stdio.h>
#define n 10 
int a[n] = {10,25,36,54,65,75,84,96,100,154},low=0,high=9,mid,i,b,result;
int binary_search(int b,int low,int high)
{
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid] == b)
        {
            return mid;
        }
        else if(a[mid] > b)
        {
            high = mid - 1;
        }
        else if(a[mid] < b)
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter Number :- ");
    scanf("%d",&b);
    result = binary_search(b,low,high);
    if(result != -1)
    {
        printf("index: %d",result);
    }
    else
    {
        printf("not found..");
    }
}