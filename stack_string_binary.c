#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
char stack[MAX_SIZE];
int top = -1;
void push(char ch) 
{
    if(top<MAX_SIZE-1)
    {
        stack[++top] = ch;
    }
    else
    {
     printf("string is too long!");
    }
}

char pop() 
{
    return stack[top--];
}

void stringToBinary(char *str) 
{
    for (int i = 0; i < strlen(str); i++) {
        int decimal = str[i];
        while (decimal > 0) {
            push(decimal % 2 + '0');
            decimal /= 2;
        }
        while (top != -1) {
            printf("%c", pop());
        }
        printf(" ");
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    stringToBinary(str);
    return 0;
}
