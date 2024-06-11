#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    char s1[100],*s2;
    printf("Enter string:");
    scanf("%s",&s1);
  s2=strtok(s1," ");
  while(s2!=NULL)
  {
    printf("%s",s2);
    s2=(NULL," ");
  }
}