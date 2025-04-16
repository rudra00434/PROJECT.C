#include<stdio.h>
int main()
{
    int arr[10],i,size,num,flag=0,pos=-1;
    printf("\nthe size of the array: ");
    scanf("%d",&size);
    printf("enter the elements of the array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nenter the number to search: ");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(arr[i]==num)
        {
           pos=i;
           printf("element is present at position=%d",i+1);
           flag=1;
           break;
        }
    }
    if(flag==1)
    {
        for(i=pos;i<=(size-1);i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    
    printf("\nthe Updated array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    }
    if(flag==0)
    {
        printf("number is not present in this array");
    }
    return 0;
    
    }