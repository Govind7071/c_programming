#include<stdio.h>
int main (){
    int i,a,b,c,sum=0;
    for(i=1;i<500;i++)
    {
        a=i%10;
        sum=sum+a*a*a;
    
        i=i/100;

    
    
    if(i==sum)
    printf(" %d\n",i);
    }
    return 0;
}