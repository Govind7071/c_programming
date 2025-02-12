//print the table of any number 
#include<stdio.h>
int main (){
int i,n,t;
printf("enter the number :");
scanf("%d",&n);
for (i=1;i<=10;i++)
{
    t=n*i;
    printf("%d * %d = %d \n",n,i,t);
}
return 0;
}