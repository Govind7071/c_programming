#include<stdio.h>
int main ()
{
    int i,n,count =0;
    printf("enter the number :");
scanf("%d",&n);
if(n==1||n==0)
count =1;
for (i=2;i<=n-1;i++)
{
    if (n%i==0){
    count++;
    break;
    }
}
 if(count==0)
printf("%d is prime number",n);
else
printf("%d is not prime",n);
return 0;
}