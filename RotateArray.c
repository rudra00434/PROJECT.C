#include<stdio.h>
#define RIGHT 1
#define LEFT 0
void Rotate_array(int a[],int N,char dir,int count);
void display_array(int a[],int N);

int main()
{
    int a[8]={10,20,30,40,50,60,70,80};
    display_array(a,8);
    Rotate_array(a,8,RIGHT,1);
    display_array(a,8);
    return 0;
}
void display_array(int a[],int N)
{
    int i;
    printf("\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",a[i]);
    }
}
void Rotate_array(int a[],int N,char dir,int count)
{
    int i,temp;
    if(dir==RIGHT)
    {
        while(count!=0)
        {
            temp=a[N-1];
            for(i=(N-1);i>=1;i--)
            {
            a[i]=a[i-1];
            a[0]=temp;
            count--;
           }
           
        }
    }
    else
    {
        while(count!=0)
        {
            temp=a[0];
            for(i=0;i<=(N-2);i++)
            {
                a[i]=a[i+1];
                a[N-1]=temp;
                count--;
            }
    
        }
    }

}