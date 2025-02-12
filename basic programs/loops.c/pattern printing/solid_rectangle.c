#include<stdio.h>
int main ()
{
    int i,j,m,n;
    printf("enter the number of rows :");
    scanf("%d",&m);
    printf("enter the number of columns :");
    scanf("%d",&n);
    for (i=1;i<=m;i++){
    {
        for(j=1;j<=n;j++)
        printf("*\t");
    }
    printf("\n");
}
return 0;
}