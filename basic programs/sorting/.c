#include<stdio.h>
int main (){
    int n,count=0;
    printf("enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n!=0)
        {
            n=n/10;
            count++;

        }
    }
    printf("%d",count);
    return 0;
}