#include<stdio.h>
int main()
{
int arr[20],max,min,second_max,i,n,pos1,pos2,pos3;
printf("\nenter the size of the array: ");
scanf("%d",&n);
printf("the elements of an array are: ");
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);

 }
max=min=arr[0];
pos1=pos2=pos3=0;
for(i=0;i<n;i++)
{
     if(arr[i]<min)
    {
      min=arr[i];
      pos1=i;
    }
    if(arr[i]>max)
    {
      max=arr[i];
      pos2=i;
    }
}
second_max=arr[1];
for(i=0;i<n;i++)
{ 
  if(arr[i]!=max)
   {
     if(arr[i]>second_max)
       {
        second_max=arr[i];
        pos3=i;
       } 
   }
}
printf("\nthe largest element of the array is %d at position %d",max,pos2);
printf("\nthe smallest element of the array is %d at position %d",min,pos1);
printf("\nthe second largest element of the array is %d at position %d",second_max,pos3);
return 0;
}