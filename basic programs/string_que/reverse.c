#include<stdio.h>
#include<string.h>
int main ()
{
    int len,i;
    char s[30],temp;
    printf("enter string :");
    gets(s);
    len=strlen(s);
    for(i=0;i<len/2;i++)
    {
        temp=s[i];
        s[i]=s[len-1-i];
        s[len-1-i]=temp;
    }
    puts(s);
    return 0;
}