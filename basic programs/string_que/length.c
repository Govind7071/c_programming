#include<stdio.h>
#include<string.h>
int main ()
{
    int len,i;
    char s[30];
    printf("enter string :");
    gets(s);
    while(s[i]!='\0')
    i++;
    printf("entered string is %5.4s\n",s);
    printf("the length of string is %d",i);
  
    return 0;
}