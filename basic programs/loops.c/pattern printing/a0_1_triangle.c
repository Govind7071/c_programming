#include<stdio.h>
int main ()
{
    int i,j,a=1;
    for(i=1;i<=4;i++){
        
        for(j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            printf("1\t");
            else printf("0\t");
        }
        printf("\n");
    }
        return 0;
    }