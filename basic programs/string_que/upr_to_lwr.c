#include<stdio.h>
#include<string.h>
int main ()
{
    int i=0;
    char s[30];
    printf("enter string :");
    gets(s);
    while(s[i]!='\0'){
    if((s[i]>=65)&&(s[i]<=97))
    s[i]=s[i]+32;
    i++;
  }  
  printf("the string in lower case is %s",s);
  return 0;
}
