#include<stdio.h>
#define MAX 15
struct stack
{
    char a[MAX];
    int top;
}s;
void init()
{
    s.top=-1;
}
int isempty()
{
    if(s.top==-1)
     return 1;
    else 
     return 0; 
}
int isfull()
{
    if(s.top==MAX-1)
      return 1;
    else
      return 0;  
}
void push(char c) 
{
    if(isfull())
     printf("\nStack is full\n");
    else
      {
        s.top++;
        s.a[s.top]=c;
      }
}
char pop()
{
  char val;
    if(isempty())
     printf("Stack is empty");
    else
     {
        val=s.a[s.top];
        s.top--;
        return val;
     } 
}
int main()
{
    int i;
   
    char s1[100];
    printf("Enter string:");
    gets(s1);
     init ();
    for(i=0;s1[i]!='\0';i++)
    {
        push(s1[i]);
        
    }

    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]!=pop())
        {
         break;
        }
    }
    if(isempty())
     printf("\nString is palindome");
    else
      printf("\nString is not palindome");
      
}