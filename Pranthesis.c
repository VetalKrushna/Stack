#include<stdio.h>
#define MAX 20
struct stack
{
    char a[100];
    int top;
}s;
void init()
{s.top=-1;}

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

void push(char ch)
{
    if(isfull())
      printf("Stack is full");
    else 
    {
        s.top++;
        s.a[s.top]=ch;
    }  
}

void pop()
{
    if(isempty())
     printf("Stack is empty");
    else
     {
        s.top--;
     } 
}

int main()
{
    char exp[10];
    int i,c1=0,c2=0;
    printf("Enter Expression:");
    gets(exp);
    init();
    for(i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
          {
          push(exp[i]);
           c1++;
          } 
        
         if(exp[i]==')')  
          {
            pop();
            c2++;
          }
    }
    if(c1==c2)
     printf("\nExpression is fully paranthesis");
    else 
     printf("\nExpression is not fully paranthesis");
       
}
