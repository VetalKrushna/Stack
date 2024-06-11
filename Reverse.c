#include<stdlib.h>
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
void push(char ch[]) 
{
    if(isfull())
     printf("\nStack is full\n");
    else
      {
        s.top++;
        s.a[s.top]=ch;
        printf("%s",s.a[s.top]);
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
    char s1[100][100],*s2;
    printf("Enter string:");
    gets(s1);
  s2=strtok(s1," ");
  while(s2!=NULL)
  {
    push(s2);
    s2=(NULL," ");
  }
  while(!isempty())
   printf("%s ",pop());
}