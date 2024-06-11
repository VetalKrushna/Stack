#define MAX 10
#include<ctype.h>
#include<stdio.h>
struct stack
{
    char a[MAX];
    int top;
}s;

void init()
{
 s.top=-1;
}

int isfull()
{
    if(s.top==MAX-1)
     return 1;
    else
     return 0; 
}
int isempty()
{
    if(s.top==-1)
     return 1;
    else 
     return 0;
}
char peek()
{
    return s.a[s.top];
    
}
char pop()
{
    if(isempty())
    {
        printf("Stack is empty.");
    }
    else
    {
        char ch;
      ch=s.a[s.top];
      s.top--;
      return ch;
    }
}

void push(char ch)
{
    if(isfull())
    {
        printf("Stack is full");
    }
    else
    {
      s.top++;
      s.a[s.top]=ch;
    }

}

int priority(char ch)
{  
    if(ch=='(')
     return 0;
    else if(ch=='+'||ch=='-')
     return 1;
    else if(ch=='*'||ch=='/') 
     return 2;
    else if(ch=='$'||ch=='^')
     return 3; 
}
int main()
{
    int i;
    init();
    char ch,infix[100];
    printf("Enter Infix Expression:");
   gets(infix);
    printf("\nPosttfix expression:");
    for(i=0;infix[i]!='\0';i++)
    {
        ch=infix[i];
        if(isalpha(ch))
         push(ch);

        else if(ch=='(')  
         push(ch);
        else if(ch==')') 
        {
            while((ch=pop())!='(')
            {
              printf("%c",ch);
            }
        }
        else
        {
         while((priority(peek())>=priority(ch)) && (!isempty()))
         {
            printf("%c",pop());
            
         }
         push(ch);
        }    
    } 
    while(!isempty())
    {
        printf("%c",pop());
    }
}
