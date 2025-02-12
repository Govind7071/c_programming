#include<stdio.h>
#include<string.h>
int main ()
{
    int len=0,i=0;
    char s1[30],s2[15];
    printf("enter first  string :");
    gets(s1);
    printf("enter second string :");
    gets(s2);
   len=strlen(s1);
   while(s2[i]!='\0')
   {
    s1[len+i]=s2[i];
    i++;
   }
   printf("%s",s1);
   return 0;
}