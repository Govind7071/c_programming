#include<stdio.h>
int main ()
{
    int a=1,b=1,i,n,sum;
    printf("enter the nth term");
    scanf("%d",&n);
    if(n==1||n==2)
        sum=1;
    for(i=1;i<=n-2;i++){
    sum =a+b;
    a=b;
    b=sum;
    }
    printf("%d",sum );
    
    return 0;
}