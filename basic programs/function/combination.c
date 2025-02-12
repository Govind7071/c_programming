/*#include<stdio.h>
int factorial(int x){
    int fact=1,i;
for(i=2;i<=x;i++)
fact=fact*i;
return fact;
}
int main (){
    int n,r;
    printf("enter the n and r :");
    scanf("%d%d",&n,&r);
    int ncr=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d",ncr);
    return 0;
}*/
#include<stdio.h>
int comb(int x);
int main (){
    int n,r,ncr;
    printf("enter the value of n and r  :");
    scanf("%d%d",&n,&r);
    ncr=comb(n)/(comb(r)*comb(n-r));
    printf("the ncr is %d",ncr);
    return 0;
}
int comb(int x)
{
    int f=1,i;
    for(i=2;i<=x;i++)
    f=f*i;
    return f;
}
