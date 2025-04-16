#include<bits/stdc++.h>
using namespace std;
const int x=32;
char *lowerToupper(char *a)
{
  for(int i=0;a[i]!='\0';i++)
    a[i]=a[i] & ~x;
   return a; 
  
}
int main()
{
    char str[]="rudranil";
    printf("%s",lowerToupper(str));
    return 0;
}