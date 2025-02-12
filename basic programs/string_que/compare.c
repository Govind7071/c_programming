#include<stdio.h>
#include<string.h>
int main ()
{
    int len1=0,len2=0,i=0;
    char s1[30],s2[30];
    printf("enter first  string :");
    gets(s1);
    printf("enter second string :");
    gets(s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1==len2)
    {
        while(s1[i]!='\0')
        {
            if(s1[i]==s2[i])
            i++;
            else
            break;
        }
    }
    if(len1==i)
    printf("both strings are same");
    else
    printf("not same");
    return 0;
}