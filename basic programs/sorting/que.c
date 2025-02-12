#include<stdio.h>
int main (){
    int n,rev=0,a;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;  
        rev=rev*10+a;
        n=n/10;
       
    }
   
    printf("%d",rev);
    return 0;
}