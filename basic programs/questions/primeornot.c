#include<stdio.h>
int main (){
    int i=2,n,count=0;
    printf("enter the number :");
    scanf("%d",&n);
    if((n==0)||(n==1))
            count++;
    while (i<n)
    {
        
   if(n%i==0)
   count++;  
   i++;
   break;
    }
    if(count==0)
    printf("%d is prime number",n);
    else
    printf("%d is not a prime number",n);
    return 0;
}