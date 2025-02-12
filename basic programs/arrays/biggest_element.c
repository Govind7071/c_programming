#include<stdio.h>
int main (){
int i,a[5],big;
printf("enter the elements in array :");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
    printf(" \t %d",a[i]);
}
big=a[0];
for(i=0;i<5;i++)
{
if(a[i]>big)
big=a[i];
}
printf("\n the biggest = %d",big);
return 0;
}