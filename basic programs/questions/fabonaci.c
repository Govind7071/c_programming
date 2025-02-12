#include <stdio.h>
int main() {
int a=1,b=1,sum=0,i,n;
printf("enter the terms : ");
scanf("%d",&n);
for(i=1;i<=n-2;i++)
{
    sum =a+b;
    a=b;
    b=sum;

  printf("%d",sum);
    
}

  return 0;
}