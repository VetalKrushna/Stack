#define MAX 100
#include<stdio.h>

struct stack
{
    int a[MAX];
    int top;
}s;

void init()
{s.top=-1;}

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

void push(int n)
{
    if(isfull())
     printf("Stack is full");
    else
     {
        s.top++;
        s.a[s.top]=n;
     } 
}
int pop()
{
    if(isempty())
      printf("Stack is full.");
    else
      {
        int ch=s.a[s.top];
        s.top--;
        return ch;
      }  
}

int main()
{
    int a,b,c,d,i,result,val1,val2;
    char postfix[100],ch;
    printf("Enter Postfix Expression:");
    gets(postfix);
    printf("Enter the vale of ABCD");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    init();
    for(i=0;postfix[i]!='\0';i++)
    {
        ch=postfix[i];
        if(isalpha(ch))
        {
          switch(ch)
           {
            case 'A':push(a);break;
            case 'B':push(b);break;
            case 'C':push(c);break;
            case 'D':push(d);break;       
           }
        }
        else
         {
            val1=pop();
            val2=pop();
            switch(ch)
            {
                case '+':push(result=val2+val1);break;
                case '-':push(result=val2-val1);break;
                case '*':push(result=val2*val1);break;
                case '/':push(result=val2/val1);break;
            }
         }
    }

    printf("\n Answer of Expression:%d",pop());
}