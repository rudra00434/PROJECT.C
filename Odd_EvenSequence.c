#include<stdio.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int a[100],b[100],c[100],d[100];
	int i,j,k,l=0,m,n,p=0;
	printf("\nEnter the size of first array=");
	scanf("%d",&n);
	printf("\nEnter the size of second array=");
	scanf("%d",&m);
	printf("\nEnter the elements of first array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\nEnter the elements of second array\n");
	for(i=0;i<m;i++)
	{
		printf("b[%d]=",i);
		scanf("%d",&b[i]);
	}
	k=n+m;
	for(i=0;i<n;i++)
	{
		c[l]=a[i];
		l++;
	}
	for(i=0;i<m;i++)
		c[i+l]=b[i];
    printf("\nThe merged array\n");
    for(i=0;i<k;i++)
     printf("%d ",c[i]);
    for(i=0;i<k;i++)
    {
    	if(c[i]%2==0)
    	{
    		d[p]=c[i];
    		p++;
		}
	}
	//p=p+1;
	for(i=0;i<k;i++)
	{
		if(c[i]%2!=0)
		{
			d[p]=c[i];
			p++;
		}
	}
	printf("\nModified array\n");
	for(i=0;i<k;i++)
	 printf("%d\t",d[i]);
    return 0;
}