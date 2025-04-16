#include<stdio.h>
int fibonacci(int n);
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;

    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
      return (fibonacci(n-1)+fibonacci(n-2));
    }
}
int main()
{
    int n,res;
    printf("\nenter the number of terms: ");
    printf("%d",&n);
    for(int i=0;i<n;i++)
    {
        res=fibonacci(i);
        printf("%d\t",res);
    }
    return 0;
}